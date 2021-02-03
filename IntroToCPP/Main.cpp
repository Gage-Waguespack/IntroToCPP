#include <iostream>

int main()
{
	//Tells the player the rules
    std::cout << "Pick a number between one and ten" << std::endl;

    system("pause");

	std::cout << "Rules: Answer all questions with the number that is displayed!" << std::endl;

	std::cout << " " << std::endl;

    std::cout << "Remember that number and DO NOT CHANGE IT!" << std::endl;

	//Pauses before starting
    system("pause");
    system("CLS");

	//Sets a min and max value, as well as a length
    int length = 10;
    int min = 1;
    int max = 10;

	//Loops the main game while the min is less than or equal to the max
	while (min <= max)
	{
		int num = 0;
		int higher = 1;
		bool lower = 2;
		bool correct = 3;
		//Adds a guess that does the math of checking which number was picked
		int guess = (min + max) / 2;

		//Displays a number on screen
		std::cout << "Is this your number? " << guess << std::endl;

		//Asks if the number is higher, lower, or correct
		std::cout << "1. Higher" << std::endl;
		std::cout << "2. Lower" << std::endl;
		std::cout << "3. Correct" << std::endl;

		std::cin >> num;

		//Checks if the player cheated by changing their number
		if (num == 1)
		{
			if (min == max)
			{
				std::cout << "You cheated, remember not to change your number!" << std::endl;
			}
			min = guess + 1;

		}
		//Checks again if the player cheated by changing their number
		else if (num == 2)
		{
			if (min == max)
			{
				std::cout << "You cheated, remember not to change your number!" << std::endl;
			}
			max = guess - 1;

		}
		//Checks if the number is correct, if so, the player wins
		else if (num == 3)
		{
			std::cout << "Told You I would get it" << std::endl;
			break;
		}

    }
    
    system("pause");
    return 1;
}