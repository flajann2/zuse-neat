#pragma once
#include "neat.h"
#include <dlfcn.h>

/* DynamicLibrary Basics
 * For the extensive docs, see the main README.org
 */

/* Basic C++ifying the C API for dlopen() and friends.
 */
namespace dlso {
  enum class rtld_t: unsigned int {};
  const auto lazy     = rtld_t(RTLD_LAZY);
  const auto now      = rtld_t(RTLD_NOW);
  const auto global   = rtld_t(RTLD_GLOBAL);
  const auto local    = rtld_t(RTLD_LOCAL);
  const auto nodelete = rtld_t(RTLD_NODELETE);
  const auto noload   = rtld_t(RTLD_NOLOAD);
  const auto deepbind = rtld_t(RTLD_DEEPBIND);

  // wraps dlopen()
  handle open(const std::string& filename, rtld_t flags) {
  } 
}
