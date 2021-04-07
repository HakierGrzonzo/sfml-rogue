#pragma once

#include "Component.hpp"
#include "../utils/position/Position.hpp"
#include <vector>
#include <memory>

namespace entity {
  class Entity {
    public:
      utils::Position position;
      std::vector<component::Component> components;
      template <class T>
      std::shared_ptr<T> GetComponent(); // returns pointer to component of type
    protected:
    private:
  };
}
