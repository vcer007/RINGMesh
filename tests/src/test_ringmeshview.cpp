/*
 * Copyright (c) 2012-2016, Association Scientifique pour la Geologie et ses Applications (ASGA)
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

#include <ringmesh/ringmesh_tests_config.h>

#include <ringmesh/basic/common.h>

#ifdef RINGMESH_WITH_GRAPHICS

#include <geogram/basic/logger.h>
#include <geogram/basic/process.h>

#include <ringmesh/visualization/gfx_application.h>

/*!
 * @author Pierre Anquez
 */

namespace RINGMesh {

    /*!
     * Cross-platform function to make a pause
     */

#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

    void wait( const index_t milliseconds )
    {
#ifdef WIN32
        Sleep(milliseconds) ;
#else
        // usleep takes microseconds
        usleep( static_cast< __useconds_t >( milliseconds * 1000 ) ) ;
#endif
    }

}

namespace RINGMesh {

    class StartAppThread: public GEO::Thread {
    public:
        StartAppThread( RINGMeshApplication* app )
            : GEO::Thread(), app_( app )
        {
        }

        virtual void run()
        {
            app_->start() ;
        }

    private:
        RINGMeshApplication* app_ ;
    } ;

    class QuitAppThread: public GEO::Thread {
    public:
        QuitAppThread( RINGMeshApplication* app )
            : GEO::Thread(), app_( app )
        {
        }

        virtual void run()
        {
            // Wait one second to be sure that the windows is really opened
            wait( 1000 ) ;
            app_->quit() ;
        }

    private:
        RINGMeshApplication* app_ ;
    } ;

}

int main()
{
    using namespace RINGMesh ;

    try {

//        CmdLine::declare_arg("array_size", 2, "number of cells in array");

        std::string input_model_file_name( ringmesh_test_data_path ) ;
        input_model_file_name += "modelA6.ml" ;

        char* input = &input_model_file_name[0] ;
        char** p_input = new char* ;
        p_input = &input ;

        int argc = 1 ; //2
        // Two arguments: one for 'ringmeshview' the second one for the input file

        RINGMeshApplication app( argc, p_input ) ;

        // Create the threads for launching the app window
        // and the one for closing the window
        StartAppThread start_thread( &app ) ;
        QuitAppThread quit_thread( &app ) ;

        // Add the both threads in a group
        GEO::ThreadGroup thread_group ;
        thread_group.push_back( &start_thread ) ;
        thread_group.push_back( &quit_thread ) ;

        // Run concurrently the both threads
        GEO::Process::run_threads( thread_group ) ;

        return 0 ;

    } catch( const RINGMeshException& e ) {
        Logger::err( e.category() ) << e.what() << std::endl ;
        return 1 ;
    } catch( const std::exception& e ) {
        Logger::err( "Exception" ) << e.what() << std::endl ;
        return 1 ;
    }
    return 0 ;
}

#else
#include <geogram/basic/logger.h>
int main() {

    default_configure() ;
    Logger::out("RINGMeshView")
    << "To compile RINGMesh viewer you need to configure "
    << "the project with the RINGMESH_WITH_GRAPHICS option ON"
    << std::endl ;
    return 0 ;
}
#endif
