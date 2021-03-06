/*
 *  Aircraft Simulation Engine
 *
 *  Platform: X-Plane 11.50
 *  Dependencies: XPLM 302 SDK, OpenGL32, GLEW32
 *  Start date: 26-05-2020
 *
 *  by Chaidhat Chaimongkol
 *
 */

#define ASE_VERSION "2.0"

// For use by ase plugin/application/client

// manages standard plugin behaviour
#include "ase/core/plugin.hpp"
// manages data IO of X-Plane
#include "ase/core/data.hpp"
// manages plugin events behaviour
#include "ase/core/event.hpp"
// manages IO of the engine
#include "ase/core/io.hpp"

// manages debug logging
#include "ase/debug/log.hpp"
// manages debug timings and memory usage
//#include "ase/debug/profile.hpp"

// manages graphics and drawing with GLEW
#include "ase/graphics/graphics.hpp"





// entry point
#include "ase/core/entryPoint.hpp"

