//
// Created by Артем Устинов on 04/10/2019.
//

#ifndef CLIONSFML_GAMESCENE_HPP
#define CLIONSFML_GAMESCENE_HPP


#include "field.hpp"
#include "ghost.hpp"
#include "packman.hpp"

#include <map>

enum class GameState
{
  Playing,
  PlayerLosed,
  PlayerWon,
};

struct GameScene
{
  Field field;
  Packman packman;
  std::map<GhostId, Ghost> ghosts;
  GameState gameState; //sostoynie
  unsigned totalCookieCount;

  sf::Font arial;
  sf::RectangleShape gameOverBackground;
  sf::Text gameOverLabel;
};

void initializeGameScene(GameScene &scene, const sf::Vector2f &sceneSize);
void updateGameScene(GameScene &scene, float elapsedTime);
std::string getGameSceneWindowTitle(const GameScene &scene);
void drawGameScene(sf::RenderWindow &window, const GameScene &scene);
void destroyGameScene(GameScene &scene);

#endif //CLIONSFML_GAMESCENE_HPP
