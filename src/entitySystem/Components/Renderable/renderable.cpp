#include "renderable.hpp"

namespace component {
  Renderable::Renderable(std::shared_ptr<entity::Entity> parent_):component::Component(parent_) {}
  sf::Sprite* Renderable::Render(std::shared_ptr<utils::Position> cameraPos) {
    return nullptr;
  }
}
