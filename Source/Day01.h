#pragma once

#include "Day.h"

class Day01 : public Day
{
public:
	Day01(const char* name)
	{
		Name = name;
	}

	void OnLoad() override
	{
		m_Input = Utils::ReadFile("Input/day01.txt");
	}

	void OnSolve() override
	{
		Vector<int> nums;

		for (size_t i = 0; i < m_Input.size(); i++)
		{
			char c = m_Input[i];

			if (Utils::IsDigit(c))
			{
				nums.push_back(c - 48);
			}
			
			if (c == '\n' || i >= m_Input.size() - 1)
			{
				if (nums.size() >= 1)
				{
					int tens = nums[0];
					int ones = nums[nums.size() - 1];

					m_Sum += tens * 10 + ones;
				}

				nums.clear();
			}
		}
	}

	void OnResult() override
	{
		std::cout << "Result: " << m_Sum << std::endl;
	}

private:
	String m_Input;
	int m_Sum = 0;
};