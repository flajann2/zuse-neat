import neat;

namespace neat {
  class Critter : public Neat {
    class Genotype : public Neat {
      /* Gene Specification 
       *
       * The Gene specifies a singular input and output
       * neuron, which represents a connection between
       * them, along with the weight of that
       * connection, which may be positive, negative,
       * or zero.
       * 
       * There is also the enabled flag, which enables
       * the gene.
       */
      struct Gene : public Neat {
        std::size_t in_neuron;
        std::size_t out_neuron;
        double weight;

        std::size_t innovation;

        bool enabled;
      };

      std::vector<Gene> genes;
    };
    
    class Phenotype : public Neat {
    };

    Genotype genotype;
    Phenotype phenotype;
  };
}
