#include "Array.hpp"
#include "Array.cpp"
#include <math.h>

#define MAX_VAL 20

int main(){
	Array<int> numbers(MAX_VAL);
	Array<int> number(MAX_VAL);
	Array<char> letters(MAX_VAL);
	Array<int> test;
	Array<std::string> phrases(MAX_VAL);

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() / pow(10, 8);
		numbers[i] = value;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() / pow(10, 8);
		number[i] = value;
	}

	char letter = 'a';
	for (int i = 0; i < MAX_VAL; i++)
	{
		letters[i] = letter;
		letter++;
	}

	std::string phrase = "nice";
	for (int i = 0; i < MAX_VAL; i++)
	{
		phrases[i] = phrase;
		phrase.append("e");
	}
	numbers = number;



	Array<int> clonedArrayNumbers(numbers);
	Array<char> clonedArrayLetters = letters;

	// Array<int> clonedArrayNumbers;
	// Array<char> clonedArrayLetters;

	// clonedArrayNumbers = numbers;
	// clonedArrayLetters = letters;


	std::cout << numbers << std::endl;
	std::cout << letters << std::endl;
	std::cout << clonedArrayNumbers << std::endl;
	std::cout << clonedArrayLetters << std::endl;
	numbers[0] = 10000;
	letters[0] = 'z';
	std::cout << numbers << std::endl;
	std::cout << letters << std::endl;
	std::cout << clonedArrayNumbers << std::endl;
	std::cout << clonedArrayLetters << std::endl;
	std::cout << phrases << std::endl;

	try {
		std::cout << "Test is: " << numbers[2] << std::endl;
		std::cout << "Test is: " << letters[2] << std::endl;
		std::cout << "Test is: " << letters[0] << std::endl;
		std::cout << "Test is: " << letters[-7] << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}