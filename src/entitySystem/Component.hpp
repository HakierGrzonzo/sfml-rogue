#pragma once
#include "Entity.hpp"
#include "../utils/position/Position.hpp"
#include <memory>

namespace component {
  class Component {
    public:
      Component(std::shared_ptr<utils::Position> parentPos);
      virtual void Update(); // called every frame
      virtual void Awake(); // called on creation
    private:
      std::shared_ptr<utils::Position> position;
      
  };
}
