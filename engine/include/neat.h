#pragma once

#if (__cplusplus < 201703L)  // C++11 ?
    #error "hyper_array requires a C++17-compliant compiler"
#endif

#include <cstddef>
#include <iostream>
#include <atomic>

namespace neat {
  /* All NEAT type objects derive from this class.
   */
  class Neat {
    virtual ~Neat() = default;
  };

  /* Global Resource (singleton)
   */
  std::size_t innovation();   
}
