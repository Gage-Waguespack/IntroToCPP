#include <iostream>
#include <fstream>
#include "Character.h"

int exampleOne()
{
	Character player = Character();
	player.health = 100;
	player.damage = 5;

	//Example of saving to a text file.

	//Create an instance of a file stream.
	std::fstream file;

	//Search for the file with the name given in the first
	//argument. If no file with this namee exists, one with
	//the name is created. Then "std::ios::out" is used to 
	//say that we want to output data to the text file.
	file.open("save.txt", std::ios::out);

	//Check if the file isn't opened. If so return from main.
	if (!file.is_open())
	{
		return 1;
	}

	//Write player stats to the text file.
	file << player.health << std::endl;
	file << player.damage;

	//Close the file when we're done.
	file.close();

	//Example of loading from a text file.
	Character player2 = Character();

	//Search for a file that has the name given in the first
	//argument. The"std::ios::in" argument is used to say
	// that we want to get input from the file.
	file.open("save.txt", std::ios::in);

	//Check if the file isn't opened. If so return from main.
	if (!file.is_open())
	{
		return 1;
	}

	//Reads the player stats from the text file.
	file >> player2.health;
	file >> player2.damage;

	//Closes the file once we're done.
	file.close();

	std::cout << player2.health << std::endl;
	std::cout << player2.damage << std::endl;

	return 0;
}

bool binaryFileExample()
{
	//Initialize Characters
	Character sbeve = Character();
	sbeve.health = 100;
	sbeve.damage = 12;
	Character sbeve2 = Character();
	sbeve2.health = 110;
	sbeve2.damage = 13;
	Character sbeve3 = Character();
	sbeve3.health = 111;
	sbeve3.damage = 14;

	//Create an instance of file stream
	std::fstream file;

	//Open the file we want to save to. The first argument is the file path
	//The second is what we will be doing with the file (reading or writing)
	//followed by any parameters. In this case, std::ios::binary is used
	//to make the file created a binary file.
	file.open("save.txt", std::ios::out | std::ios::binary);

	//Check to see if the file is open before using it
	if (!file.is_open())
		return false;

	//Write all the characters to file.
	file.write((char*)&sbeve, sizeof(Character));
	file.write((char*)&sbeve2, sizeof(Character));
	file.write((char*)&sbeve3, sizeof(Character));

	//Close the file once writing is complete.
	file.close();

	//Create a character to store the loaded data.
	Character sbeve4 = Character();

	//Open the file to load from.
	file.open("save.txt", std::ios::in | std::ios::binary);

	//Check to see if the file is open.
	if (!file.is_open())
		return false;

	//Position the marker to be two Characters away from the beginning.
	file.seekg(sizeof(Character) * 2, std::ios::beg);

	//Set the character to be the value read from the file.
	file.read((char*)&sbeve4, sizeof(Character));

	//Print the results
	std::cout << sbeve4.health << std::endl;
	std::cout << sbeve4.damage << std::endl;

	//Close the file.
	file.close();
	return true;
}

bool binaryFileLoading()
{
	char save[6] = { 'S', 'a', 'v', 'e', ' ' , '\0' }; ".txt";

	//Create an instance of file stream
	std::fstream file;

	std::cout << "What is the file that you would like to load?" << std::endl;

	std::cin >> save;

	//Open the file we want to save to. The first argument is the file path
	//The second is what we will be doing with the file (reading or writing)
	//followed by any parameters. In this case, std::ios::binary is used
	//to make the file created a binary file.
	file.open(save, std::ios::out | std::ios::binary);




	//Close the file.
	file.close();
	return true;
}

int main()
{
	binaryFileLoading();

	return 0;
}