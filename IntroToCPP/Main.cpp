#include <iostream>

int main()
{

    std::cout << "Pick a number between one and ten" << std::endl;

    system("pause");

	std::cout << "Rules: Answer all questions with the number that is displayed!" << std::endl;

	std::cout << " " << std::endl;

    std::cout << "Remember that number and DO NOT CHANGE IT!" << std::endl;

    system("pause");
    system("CLS");

    int length = 10;
    int min = 1;
    int max = 10;

	while (min <= max)
	{
		int num = 0;
		int higher = 1;
		bool lower = 2;
		bool correct = 3;
		int guess = (min + max) / 2;

		std::cout << "Is this your number? " << guess << std::endl;

		std::cout << "1. Higher" << std::endl;
		std::cout << "2. Lower" << std::endl;
		std::cout << "3. Correct" << std::endl;



		std::cin >> num;


		if (num == 1)
		{
			if (min == max)
			{
				std::cout << "You cheated, remember not to change your number!" << std::endl;
			}
			min = guess + 1;

		}
		else if (num == 2)
		{
			if (min == max)
			{
				std::cout << "You cheated, remember not to change your number!" << std::endl;
			}
			max = guess - 1;

		}
		else if (num == 3)
		{
			std::cout << "Told You I would get it" << std::endl;
			break;
		}

    }
    
    system("pause");
    return 1;
}