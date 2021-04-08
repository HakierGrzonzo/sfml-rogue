#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <stdexcept>
#include "entitySystem/Entities/tests/korwin.hpp"
#include "entitySystem/Components/Renderable/renderable.hpp"

void gameloop() {
  sf::RenderWindow window(sf::VideoMode(400, 400), "sfml plswrk");
  window.setVerticalSyncEnabled(true);

  entity::tests::korwin test(utils::Position(100, 100));
  auto korwinRenderer = test.GetComponent<component::Renderable>();

  int i = -200;
  while (window.isOpen()) {
    i++;
    if (i > 200) {
      i = -200;
    }
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) window.close();
    }
    std::shared_ptr<utils::Position> cameraPos = std::shared_ptr<utils::Position>(new utils::Position(0, i));
    window.clear();
    window.draw(*(korwinRenderer->Render(cameraPos)));
    window.display();
  }
}
