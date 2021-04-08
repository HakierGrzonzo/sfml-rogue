#include "korwin.hpp"
#include "../../Components/Renderable/sprite/korwin/korwin.hpp"
#include "../../../utils/funcs.hpp"

namespace entity {
  namespace tests {
    korwin::korwin(utils::Position position_) : entity::Entity(position_) {
      Initialize();
    }
    void korwin::Initialize() {
      /*
      components.push_back(
          std::shared_ptr<component::Component>(
            dynamic_cast<component::Component*>(
              new component::sprites::korwin(
                std::shared_ptr<entity::Entity>(
                  dynamic_cast<entity::Entity*>(this)
                  )
                )
              )
            )
          );
      */
      add_component(korwin);
    }
  }
}
