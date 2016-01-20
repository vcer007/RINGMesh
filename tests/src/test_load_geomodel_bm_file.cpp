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
 *     * Neither the name of the <organization> nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 *
 *
 *
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

#include <ringmesh/geo_model.h>
#include <ringmesh/io.h>
#include <ringmesh/utils.h>

#include <geogram/basic/logger.h>


int main( int argc, char** argv )
{
    using namespace RINGMesh ;

    GEO::Logger::out( "TEST" ) << "Test IO for a GeoModel in .bm" << std::endl ;

    GeoModel in ;
    std::string input_model_file_name( ringmesh_test_data_path ) ;
    input_model_file_name += "modelA1.ml" ;

    if( !geomodel_surface_load( input_model_file_name, in ) ) {
        return 1 ;
    }

    std::string output_model_file_name( ringmesh_test_output_path ) ;
    output_model_file_name += "modelA1_saved_out.bm" ;
    if( !geomodel_surface_save( in, output_model_file_name ) ) {
        return 1 ;
    }
    GeoModel in2 ;
    if( !geomodel_surface_load( output_model_file_name, in2 ) ) {
        return 1 ;
    }
    std::string output_model_file_name_bis( ringmesh_test_output_path ) ;
    output_model_file_name_bis += "modelA1_saved_out_bis.bm" ;

    if( !geomodel_surface_save( in2, output_model_file_name_bis ) ) {
        return 1 ;
    }

    bool res = compare_files( output_model_file_name, output_model_file_name_bis ) ;
    if( res ) {
        GEO::Logger::out( "TEST" ) << "SUCCESS" << std::endl ;
    } else {
        GEO::Logger::out( "TEST" ) << "FAILED" << std::endl ;
    }

    return !res ;
}