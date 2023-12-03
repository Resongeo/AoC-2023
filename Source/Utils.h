#pragma once

#include "Types.h"
#include <fstream>
#include <sstream>
#include <iostream>

class Utils
{
public:
	static String ReadFile(const char* filename)
	{
		std::ifstream file("Input/day01.txt");
		std::stringstream buffer;
		buffer << file.rdbuf();
		return buffer.str();
	}

	static bool IsDigit(char c)
	{
		return c >= '0' && c <= '9';
	}
};