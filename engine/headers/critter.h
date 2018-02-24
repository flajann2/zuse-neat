#pragma once

namespace neat {
  class Critter : public Neat {
    class Genotype : public Neat {
      struct Gene : public Neat {
        std::size_t in_neuron;
        std::size_t out_neuron;
        double weight;

        std::size_t innovation;

        bool enabled;
      };
    };
    
    class Phenotype : public Neat {
    };
  };
}
