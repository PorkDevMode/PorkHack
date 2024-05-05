#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <cctype>

class Utilities
{




public:
	static void Printf(std::string Title, std::string Text, WORD titleColor = 9, WORD textColor = 12);
};