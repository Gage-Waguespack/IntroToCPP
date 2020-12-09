#include <iostream>

char grid[10] = { 'o','1','2','3','4','5','6','7','8','9' };


void printArray(int arr[], int length) 
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << std::endl;

	system("pause");
}

int checkwin()
{
    if (grid[1] == grid[2] && grid[2] == grid[3])

        return 1;

    else if (grid[4] == grid[5] && grid[5] == grid[6])

        return 1;

    else if (grid[7] == grid[8] && grid[8] == grid[9])

        return 1;

    else if (grid[1] == grid[4] && grid[4] == grid[7])

        return 1;

    else if (grid[2] == grid[5] && grid[5] == grid[8])

        return 1;

    else if (grid[3] == grid[6] && grid[6] == grid[9])

        return 1;

    else if (grid[1] == grid[5] && grid[5] == grid[9])

        return 1;

    else if (grid[3] == grid[5] && grid[5] == grid[7])

        return 1;

    else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3'
        && grid[4] != '4' && grid[5] != '5' && grid[6] != '6'
        && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')

        return 0;

    else

        return -1;
}


int main()
{
	int numbers[] = { 1, 2, 3, 4, 5 };
	printArray(numbers, 5);
}