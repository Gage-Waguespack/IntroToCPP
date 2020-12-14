#include "Game.h"
#include <iostream>

void Game::run()
{
	start();

	while (!getGameOver())
	{
		update();
		draw();
	}

	end();
}

void Game::start()
{

}

void Game::update()
{
}

void Game::draw()
{
}

void Game::end()
{
}
