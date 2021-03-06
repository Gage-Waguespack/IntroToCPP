#include <iostream>

void printArray(int arr[], int length) 
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << std::endl;

	system("pause");
}

int main()
{
    ///This is a simple array inside of an array making a grid
    char grid[3][3] = { {'0','0','0'}, {'0','0','0'}, {'0','0','0'} };

    ///This is an array that holds characters to create a name for player one
    char nameOne[15];
    ///This is the playersSymbol
    char playerSymbol;
    ///This should check if player one wins
    bool checkPlayer1Win = false;
    ///This is the position where the player can put their token
    int position;

    std::cout << "Player One Name:" << std::endl;
    std::cin >> nameOne;
    system("cls");

    ///This is an array that holds characters to create a name for player two
    char nameTwo[15];
    ///This should check if player two wins
    bool checkPlayer2Win = false;

    std::cout << "Player Two Name:" << std::endl;
    std::cin >> nameTwo;
    system("cls");


    std::cout << nameOne << std::endl;
    std::cout << nameTwo << std::endl;

    system("pause");
    system("cls");

    std::cout << "When asked to pick a number, this will be the layout!" << std::endl;

    std::cout << " 1 " << "   " << " 2 " << "   " << " 3 " << std::endl << std::endl;
    std::cout << " 4 " << "   " << " 5 " << "   " << " 6 " << std::endl << std::endl;
    std::cout << " 7 " << "   " << " 8 " << "   " << " 9 " << std::endl;

    system("pause");
    system("cls");

    ///These print out numbers in a grid that are set as zero and can be reassigned to the symbol the player uses
    std::cout << grid[0][0] << "   " << grid[1][0] << "   " << grid[2][0] << std::endl << std::endl;
    std::cout << grid[0][1] << "   " << grid[1][1] << "   " << grid[2][1] << std::endl << std::endl;
    std::cout << grid[0][2] << "   " << grid[1][2] << "   " << grid[2][2] << std::endl;

    system("pause");

    ///Main game loop;
    for (int i = 0; i < 9; i++)
    {

        //This builds the board
        for (int i = 0; i < 3; i++)
        {
            //These two if statements check if player one wins vertically
            if (grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X')
            {
                std::cout << nameOne << " Wins!" << std::endl;
                checkPlayer1Win = true;
                return 1;
            }

            if (grid[0][i] == 'X' && grid[1][i] == 'X' && grid[2][i] == 'X')
            {
                std::cout << nameOne << " Wins!" << std::endl;
                checkPlayer1Win = true;
                return 1;
            }

            //These two if statements check if player two wins vertically
            if (grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O')
            {
                std::cout << nameTwo << " Wins!" << std::endl;
                checkPlayer2Win = true;
                return 1;
            }

            if (grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O')
            {
                std::cout << nameTwo << " Wins!" << std::endl;
                checkPlayer2Win = true;
                return 1;
            }
        }

        //These two if statements check if player one wins horizontally
        if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
        {
            std::cout << nameOne << " Wins!" << std::endl;
            checkPlayer1Win = true;
            return 1;
        }
        if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
        {
            std::cout << nameOne << " Wins!" << std::endl;
            checkPlayer1Win = true;
            return 1;
        }

        //These two if statements check if player two wins horizontally
        if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'X')
        {
            std::cout << nameTwo << " Wins!" << std::endl;
            checkPlayer2Win = true;
            return 1;
        }
        if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'X')
        {
            std::cout << nameTwo << " Wins!" << std::endl;
            checkPlayer2Win = true;
            return 1;
        }

        //This is displaying the board on screen
        std::cout << grid[0][0] << "   " << grid[1][0] << "   " << grid[2][0] << std::endl << std::endl;
        std::cout << grid[0][1] << "   " << grid[1][1] << "   " << grid[2][1] << std::endl << std::endl;
        std::cout << grid[0][2] << "   " << grid[1][2] << "   " << grid[2][2] << std::endl;

        //This asks for the players input
        std::cout << "Player One, pick a number to set your position!" << std::endl;

        //asks for the position you would like to place your token
        std::cin >> position;

        if (i % 2)
        {
            playerSymbol = 'O';
        }

        else
        {
            playerSymbol = 'X';
        }

        //Checks if there is a token in the spot the player is placing their token at
        if (position == 'O' || 'X')
        {
            std::cout << "Pick a new spot!" << std::endl;
        }

        std::cout << "Player " << playerSymbol << ", pick a number to set your position!" << std::endl;

        //Also checks if there is a token in the spot the player is placing their token at
        if (position == 'O' || 'X')
        {
            std::cout << "Pick a new spot!" << std::endl;
        }

        //These are allthe positions of which the player can place their token going from left to right

        //This is position 1
        if (position == 1)
        {
            grid[0][0] = playerSymbol;
        }

        //This is position 2
        else if (position == 2)
        {
            grid[1][0] = playerSymbol;
        }

        //This is position 3
        else if (position == 3)
        {
            grid[2][0] = playerSymbol;
        }

        //This is position 4
        else if (position == 4)
        {
            grid[0][1] = playerSymbol;
        }

        //This is position 5
        else if (position == 5)
        {
            grid[1][1] = playerSymbol;
        }

        //This is position 6
        else if (position == 6)
        {
            grid[2][1] = playerSymbol;
        }

        //This is position 7
        else if (position == 7)
        {
            grid[0][2] = playerSymbol;
        }

        //This is position 8
        else if (position == 8)
        {
            grid[1][2] = playerSymbol;
        }

        //This is position 9
        else if (position == 9)
        {
            grid[2][2] = playerSymbol;
        }

    }

    //Displays the grid after player has placed their token
    std::cout << grid[0][0] << "   " << grid[1][0] << "   " << grid[2][0] << std::endl << std::endl;
    std::cout << grid[0][1] << "   " << grid[1][1] << "   " << grid[2][1] << std::endl << std::endl;
    std::cout << grid[0][2] << "   " << grid[1][2] << "   " << grid[2][2] << std::endl;

    system("pause");

    return 0;
}