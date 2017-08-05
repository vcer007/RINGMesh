/*
 * Copyright (c) 2012-2017, Association Scientifique pour la Geologie et ses Applications (ASGA)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ASGA nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ASGA BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *     http://www.ring-team.org
 *
 *     RING Project
 *     Ecole Nationale Superieure de Geologie - GeoRessources
 *     2 Rue du Doyen Marcel Roubault - TSA 70605
 *     54518 VANDOEUVRE-LES-NANCY
 *     FRANCE
 */

#pragma once

/* Include the configuration file generated by CMAKE
 from cmake config options and the
 include/ringmesh/config_ringmesh.h.in file.
 File is in RINGMESH_BIN/ringmesh directory.
 */
#include <ringmesh/ringmesh_config.h>
#include <ringmesh/ringmesh_export.h>

#if defined( _WIN32 )
#    ifndef WIN32
#        define WIN32
#    endif
#endif

#ifndef NDEBUG
#   define RINGMESH_DEBUG
#else
#   undef RINGMESH_DEBUG
#endif

#ifdef WIN32
#   pragma warning( disable: 4267 ) // conversion between long unsigned int and unsigned int
#   pragma warning( disable: 4250 ) // warning about diamond inheritance
#   pragma warning( disable: 4251 ) // dll interface warnings
#   pragma warning( disable: 4275 ) // let's pray we have no issues
#endif

#ifdef USE_OPENMP
#   include <omp.h>
#   ifdef WIN32
#       define RINGMESH_PARALLEL_LOOP __pragma("omp parallel for")
#       define RINGMESH_PARALLEL_LOOP_DYNAMIC __pragma( "omp parallel for schedule(dynamic)" )
#   else
#       define RINGMESH_PARALLEL_LOOP _Pragma("omp parallel for")
#       define RINGMESH_PARALLEL_LOOP_DYNAMIC _Pragma( "omp parallel for schedule(dynamic)" )
#   endif
#else
#   define RINGMESH_PARALLEL_LOOP
#   define RINGMESH_PARALLEL_LOOP_DYNAMIC
#endif

#define ringmesh_disable_copy( Class )                                          \
    public:                                                                     \
    Class( const Class & ) = delete ;                                           \
    Class& operator=( const Class& ) = delete

#define ringmesh_template_assert_2d_or_3d( type )                               \
    static_assert( type == 2 || type == 3, #type " template should be 2 or 3" )

#define ringmesh_template_assert_3d( type )                                     \
    static_assert( type == 3, #type " template should be 3" )

#define CLASS_2D_ALIAS( Class )                                                 \
    using Class ## 2D = Class< 2 >

#define CLASS_3D_ALIAS( Class )                                                 \
    using Class ## 3D = Class< 3 >

#define CLASS_DIMENSION_ALIASES( Class )                                        \
    CLASS_2D_ALIAS( Class );                                                    \
    CLASS_3D_ALIAS( Class )

#define FORWARD_DECLARATION_2D_CLASS( Class )                                   \
    template< index_t > class Class;                                            \
    CLASS_2D_ALIAS( Class )

#define FORWARD_DECLARATION_3D_CLASS( Class )                                   \
    template< index_t > class Class;                                            \
    CLASS_3D_ALIAS( Class )

#define FORWARD_DECLARATION_DIMENSION_CLASS( Class )                            \
    template< index_t > class Class;                                            \
    CLASS_DIMENSION_ALIASES( Class )

// To avoid unused argument warning in function definition
template< typename T > void ringmesh_unused( T const& )
{
}

#include <ringmesh/basic/types.h>
#include <ringmesh/basic/ringmesh_assert.h>
#include <ringmesh/basic/logger.h>

#include <geogram/basic/string.h>

#define DEBUG( a )                                                              \
    Logger::out( "Debug", #a, " = ", a )

#include <stdexcept>

namespace RINGMesh {

    /*!
     * This function configures geogram by setting some geogram options.
     * \pre This function should be call after GEO::initialize().
     */
    void RINGMESH_API configure_geogram();
    /*!
     * This function configures RINGMesh by initializing its factories.
     */
    void RINGMESH_API configure_ringmesh();
    void RINGMESH_API default_configure();

    void RINGMESH_API print_header_information();

    /*!
     * RINGMesh exception class.
     * Example:
     *       throw RINGMeshException( "I/O", "Error while loading the GeoModel" ) ;
     *
     *       try {
     *          ...
     *       } catch( const RINGMeshException& e ) {
     *          Logger::err( e.category(), e.what() ) ;
     *       } catch( const std::exception& e ) {
     *          // Catch all others STL exceptions
     *          Logger::err( "Exception", e.what() );
     *       }
     */
    class RINGMESH_API RINGMeshException: public std::runtime_error {
    public:
        template< typename ...Args >
        explicit RINGMeshException( std::string category, const Args& ...messages )
            :
                std::runtime_error( string_concatener( messages... ) ),
                category_( std::move( category ) )
        {
        }
        virtual ~RINGMeshException() throw()
        {
        }

        const std::string& category() const
        {
            return category_;
        }

    private:
        template< typename A0 >
        std::string string_concatener( const A0& a0 )
        {
            return GEO::String::to_string( a0 );
        }

        template< typename A0, typename A1, typename ...Args >
        std::string string_concatener(
            const A0& a0,
            const A1& a1,
            const Args& ...args )
        {
            return GEO::String::to_string( a0 ) + string_concatener( a1, args... );
        }
    protected:
        std::string category_;
    };

    /*!
     * This class can be used to iterate over integer loop.
     * Example:
     *              = C++98 loop =
     *    for( index_t i = 0; i < n; i++ ) {
     *      // do something
     *    }
     *
     *            = C++11-like loop =
     *    for( index_t i : range( n ) ) {
     *      // do something
     *    }
     */
    class RINGMESH_API range {
    public:
        template< typename T1, typename T2 >
        range( T1 begin, T2 end )
            :
                iter_( static_cast< index_t >( begin ) ),
                last_( static_cast< index_t >( end ) )
        {
        }
        template< typename T >
        range( T end )
            : last_( static_cast< index_t >( end ) )
        {
        }
        // Iterable functions
        const range& begin() const
        {
            return *this;
        }
        const range& end() const
        {
            return *this;
        }
        // Iterator functions
        bool operator!=( const range& ) const
        {
            return iter_ < last_;
        }
        void operator++()
        {
            ++iter_;
        }
        index_t operator*() const
        {
            return iter_;
        }

    protected:
        index_t iter_ { 0 };
        index_t last_ { 0 };
    };
}