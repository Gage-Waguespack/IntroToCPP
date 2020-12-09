#include <iostream>

void printArray() 
{
	int numbers[] = { 1,2,3,4,5 };

	for (int i = 0; i < 3; i++)
		std::cout << numbers[i] << std::endl;

	system("pause");
}

int main()
{
	printArray();
}