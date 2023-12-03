#include "AoC.h"

void AoC::Solve()
{
	for (Ref<Day> day : m_Days)
	{
		day->OnSolve();
	}

	for (size_t i = 0; i < m_Days.size(); i++)
	{
		auto& day = m_Days[i];
		std::cout << "--- Day " << i + 1 << ": " << day->Name << " ---" << std::endl;
		day->OnResult();
	}
}
