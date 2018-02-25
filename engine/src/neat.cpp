#include "neat.h"

namespace neat {
  std::size_t innovation() {
    static std::atomic_size_t inno_cnt = 0;
    return ++inno_cnt;
  }
}
