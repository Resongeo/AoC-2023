#pragma once

#include "Types.h"
#include "Utils.h"

class Day
{
public:
	virtual void OnLoad() { }
	virtual void OnSolve() { }
	virtual void OnResult() { }

	const char* Name = "";
};