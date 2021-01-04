#include "Game.h"
#include <iostream>
#include <fstream>

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
    //Create an instance of a file stream.
    std::fstream file;

    ///This is an array that holds characters to create a name for player one
    char nameOne[15];
    char playerSymbol;
    ///This should check if player one wins
    bool player1Win = false;
    if (player1Win == true)
    {
        gameOver = true;
    }

    std::cout << "Player One, what is your name?" << std::endl;
    std::cin >> nameOne;
    system("cls");

    ///This is an array that holds characters to create a name for player two
    char nameTwo[15];
    ///This should check if player two wins
    bool player2Win = false;
    if (player2Win == true)
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

    std::cout << nameOne << " would you like to load a save?" << std::endl;
    std::cout << "1. Yes" << std::endl;
    std::cout << "2. No" << std::endl;
    std::cin >> input;
    if (input == 1)
    {
        //Search for a file that has the name given in the first
        //argument. The"std::ios::in" argument is used to say
        // that we want to get input from the file.
        file.open("save1.txt", std::ios::in);

        //Check if the file isn't opened. If so return from main.
        if (!file.is_open())
        {
            std::cout << "Could not load save data!" << std::endl;
        }

        //Reads the player stats from the text file.
        //I know i'm pointing at health but i'm figuring it out now..
        file << m_player1->getHealth();
        file << m_player1->getDamage();

        //Closes the file once we're done.
        file.close();

        std::cout << m_player2->getHealth() << std::endl;
        std::cout << m_player2->getDamage() << std::endl;

    }
    if (input == 2)
    {
        std::cout << "You've chosen not to load a save!" << std::endl;
    }

    std::cout << "Now, you have 10 rounds to take out the other player!" << std::endl;

    for (int i = 0; i < 10; i++)
    {

        while (gameOver == false)
        {
            std::cout << "It is now your turn " << nameOne << ", what would you like to do?" << std::endl;
            std::cout << "1. Attack" << std::endl;
            std::cout << "2. Leave" << std::endl;
            std::cout << "3. Save" << std::endl;
            std::cin >> input;
            if (input == 1)
            {
                std::cout << nameOne << " attacked " << nameTwo << "!!" << std::endl;
                m_player1->attack(m_player2);
                std::cout << nameTwo << "lost " << m_player1->getDamage() << "!!" << std::endl;

            }
            if (input == 2)
            {
                std::cout << nameOne << " has left the fight!" << std::endl;
                std::cout << nameTwo << " is the winner by forfeit!" << std::endl;
                player2Win == true;
            }
            if (input == 3)
            {
                //Search for the file.
                file.open("save1.txt", std::ios::out);

                //Check if the file isn't opened. If so return.
                if (!file.is_open())
                {
                    std::cout << "No save was found!" << std::endl;
                    break;
                }

                //Write player stats to the text file.
                file << m_player1->getHealth() << std::endl;
                file << m_player1->getDamage() << std::endl;

                //Close the file when we're done.
                file.close();
            }

            std::cout << "It is now your turn " << nameTwo << ", what would you like to do?" << std::endl;
            std::cout << "1. Attack" << std::endl;
            std::cout << "2. Leave" << std::endl;
            std::cout << "3. Save" << std::endl;
            std::cin >> input;
            if (input == 1)
            {
                std::cout << nameTwo << " attacked " << nameOne << "!!" << std::endl;
                m_player2->attack(m_player1);
                std::cout << nameOne << "lost " << m_player2->getDamage() << "!!" << std::endl;

            }
            if (input == 2)
            {
                std::cout << nameTwo << " has left the fight!" << std::endl;
                std::cout << nameOne << " is the winner by forfeit!" << std::endl;
                player1Win == true;
            }

            if (input == 3)
            {

            }

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
