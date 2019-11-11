#ifndef CLIONSFML_CORE_HPP
#define CLIONSFML_CORE_HPP

void handleEvents(sf::RenderWindow& window)
{
  sf::Event event{};
  while (window.pollEvent(event))
  {
    // Кнопка закрытия окна
    if (event.type == sf::Event::Closed)
    {
      window.close();
    }
  }
}

void update(sf::Clock& clock, GameScene& scene)
{
  const float elapsedTime = clock.getElapsedTime().asSeconds(); // пройденное время
  clock.restart();
  updateGameScene(scene, elapsedTime);
}

void render(sf::RenderWindow& window, const GameScene& scene)
{
  window.clear();
  drawGameScene(window, scene);
  window.display();
}


#endif //CLIONSFML_CORE_HPP
