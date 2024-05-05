#include "../FunctionH/Utilities.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <cctype>
std::string capitalize(const std::string& a)
{
	std::string result = a;

	for (char& c : result)
	{
		c = std::toupper(c);
	}

	return result;
}
void Utilities::Printf(std::string Title, std::string Text, WORD titleColor, WORD textColor)
{
	//COLORS LIST
	//1: Blue
	//2: Green
	//3: Cyan
	//4: Red
	//5: Purple
	//6: Yellow (Dark)
	//7: Default white
	//8: Gray/Grey
	//9: Bright blue
	//10: Brigth green
	//11: Bright cyan
	//12: Bright red
	//13: Pink/Magenta
	//14: Yellow
	//15: Bright white
	//Numbers after 15 include background colors

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, titleColor);
	std::string TitleCapitalized = capitalize(Title);
	std::cout << "[" << TitleCapitalized << "] ";

	SetConsoleTextAttribute(hConsole, textColor);

	std::cout << Text;

	SetConsoleTextAttribute(hConsole, 7);
}