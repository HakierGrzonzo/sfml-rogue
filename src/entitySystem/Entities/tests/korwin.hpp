#pragma once

#include "../../Entity.hpp"

namespace entity {
  namespace tests {
    class korwin : public Entity {
      public:
        korwin(utils::Position position_);
        void Initialize();
    };
  }
}
