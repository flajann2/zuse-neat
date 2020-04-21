export module neat;

import <cstddef>
import <iostream>
import <atomic>
import <type_traits>

export namespace neat {
  /* All NEAT type objects derive from this class.
   */
  class Neat {
    virtual ~Neat() = default;
  };

  /* Global Resource (singleton)
   */
  std::size_t innovation() {
    static std::atomic_size_t inno_cnt = 0;
    return ++inno_cnt;
  }
}
