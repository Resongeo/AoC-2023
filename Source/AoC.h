#pragma once

#include "Day.h"

class AoC
{
public:
	AoC() = default;

	void Solve();

	template<typename T>
	void AddDay(const char* name)
	{
		m_Days.push_back(CreateRef<T>(name));
	}

private:
	Vector<Ref<Day>> m_Days;
};