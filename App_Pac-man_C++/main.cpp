#include "gamescene.hpp"
#include "core.hpp"
#include <SFML/Graphics.hpp>


int main(int, char* [])
{

  sf::ContextSettings settings;
  settings.antialiasingLevel = 4; //сглаживание
  sf::RenderWindow window(sf::VideoMode(800, 800), "PacMan Game Clone", sf::Style::Close, settings);

  sf::Clock clock;
  GameScene scene;
  initializeGameScene(scene, sf::Vector2f(window.getSize()));

  while (window.isOpen())
  {
    handleEvents(window);
    update(clock, scene);
    window.setTitle(getGameSceneWindowTitle(scene));
    render(window, scene);
    //destroyField(scene.field);
  }

  return 0;
}