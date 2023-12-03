#include "AoC.h"
#include "Timer.h"

void AoC::Solve()
{
	for (size_t i = 0; i < m_Days.size(); i++)
	{
		auto& day = m_Days[i];
		
		day->OnLoad();
		Timer timer;
		day->OnSolve();
		float duration = timer.EllapsedTime();

		std::cout << "--- Day " << i + 1 << ": " << day->Name << " ---" << std::endl;
		day->OnResult();
		std::cout << "Duration: " << duration << "ms" << std::endl;
	}
}
