#include "Game.h"
#include <iostream>

void Game::run()
{
	start();

	while (!getGameOver())
	{
		update();
		draw();

		system("pause");
	}

	end();
}

void Game::start()
{
	m_player1 = new Character(100, 10);
	m_player2 = new Character(100, 10);
    bool gameOver = false;
    int input;

    ///This is an array that holds characters to create a name for player one
    char nameOne[15];
    char playerSymbol;
    ///This should check if player one wins
    bool checkPlayer1Win = false;
    if (checkPlayer1Win == true)
    {
        gameOver = true;
    }

    std::cout << "Player One, what is your name?" << std::endl;
    std::cin >> nameOne;
    system("cls");

    ///This is an array that holds characters to create a name for player two
    char nameTwo[15];
    ///This should check if player two wins
    bool checkPlayer2Win = false;
    if (checkPlayer2Win == true)
    {
        gameOver = true;
    }

    std::cout << "Player Two, what is your name?" << std::endl;
    std::cin >> nameTwo;
    system("cls");


    std::cout << nameOne << std::endl;
    std::cout << nameTwo << std::endl;

    system("pause");
    system("cls");

    while (gameOver == false)
    {
        std::cout << "It is now your turn " << nameOne << ", what would you like to do?" << std::endl;
        std::cout << "1. Attack" << "2. Leave" << std::endl;
        std::cin >> input;
        if (input == 1)
        {
            
        }

    }

}

void Game::update()
{
	m_player1->attack(m_player2);
}

void Game::draw()
{
	std::cout << "Player2 health is : " << m_player2->getHealth() << std::endl;
}

void Game::end()
{
	delete m_player1;
	delete m_player2;
}
