#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

std::vector<int> convertToDigits(int number);
bool checkDoubleAdjacent(std::vector<int> number);
bool checkLeftToRightIncreasing(std::vector<int> number);

int main()
{
	//136760 - 595730
	long rangeValues = 136760;
	int numPossibleValues = 0;
	std::vector<int> digits;
	std::vector<int> values;
	bool checkDA;
	bool checkLTRI;
	while (rangeValues <= 595730)
	{
		digits = convertToDigits(rangeValues);
		checkDA = checkDoubleAdjacent(digits);
		checkLTRI = checkLeftToRightIncreasing(digits);
		if (checkDA && checkLTRI)
		{
			numPossibleValues++;
			//std::cout << "Found a value : " << rangeValues;
			//std::cout << " and total values so far: " << numPossibleValues << std::endl;
			values.push_back(rangeValues);
		}
		rangeValues++;
	}
	std::cout << "The values are: " << std::endl;
	for (int val : values)
		std::cout << val << std::endl;


	std::cout << "Possible values: " << numPossibleValues << std::endl;


	return 0;
}

std::vector<int> convertToDigits(int number)
{
	std::vector<int> digits;
	int digit;
	while (number > 0)
	{
		digit = number % 10;
		digits.push_back(digit);
		number = number / 10;
	}
	std::reverse(digits.begin(),digits.end());
	return digits;
}

bool checkDoubleAdjacent(std::vector<int> number)
{
	
	int n1 = 0;
	
	while (n1 < number.size()-1)
	{
		if (number[n1] == number[n1 + 1])
		{
			return true;
			break;
		}
		n1++;
	}
	return false;
}

bool checkLeftToRightIncreasing(std::vector<int> number)
{
	int max = -1;
	for (int num : number)
	{
		if (num < max)
		{
			return false;
		}
		max = num;
	}
	return true;
}
