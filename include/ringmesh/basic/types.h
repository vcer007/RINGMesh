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

#include <geogram/basic/geometry.h>
#include <geogram/basic/numeric.h>

/*!
 * @file Re-defintions of basic types similar to those of Geogram
 */

namespace RINGMesh {
    /* If you need interger of 8bits of any other one
     * it is sufficient to write using GEO::Numeric::uint8 in your file. 
     * 
     * Dummy variables were removed, the pollute the namespace and 
     * it is quite easy to do without them.
     */

    // Basic types used in RINGMesh
    // Using definitions of Geogram/basic/numeric.h   
    using GEO::Numeric::float32;
    using GEO::Numeric::float64;

    using GEO::Numeric::max_float32;
    using GEO::Numeric::min_float32;
    using GEO::Numeric::max_float64;
    using GEO::Numeric::min_float64;

    static const double global_epsilon = 1E-8;
    static const double global_epsilon_sq = global_epsilon * global_epsilon;
    static const double global_epsilon_3 = global_epsilon_sq * global_epsilon;

    // This is an array of 3 doubles
    using GEO::vec3;
    // This is an unsigned int
    using GEO::index_t;
    // This is an int
    using GEO::signed_index_t;

    // This is the value used in RINGMesh for a invalid index
    static const index_t NO_ID = index_t( -1 );

    /*! enum defining the type of cell in region 
     *  * UNCLASSIFIED_CELL may be either a connector or more complex cell that is not specified.
     *  * UNDEFINED_CELL means that the cell is not defined and cannot be used.
     */
    enum CellType {
        TETRAHEDRON = 0,
        HEXAHEDRON = 1,
        PRISM = 2,
        PYRAMID = 3,
        UNCLASSIFIED_CELL = 4,
        UNDEFINED_CELL = 5
    };

    /*! enum defining the type of polygon in surface.
    *  * UNCLASSIFIED_POLYGON may be either a connector or more complex polygon that is not specified.
    *  * UNDEFINED_POLYGON means that the polygon is not defined and cannot be used.
    */
    enum PolygonType {
        TRIANGLE = 0,
        QUAD = 1,
        UNCLASSIFIED_POLYGON = 2,
        UNDEFINED_POLYGON = 3
    };
}
