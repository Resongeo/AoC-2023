#pragma once

#include <chrono>

class Timer
{
public:
	Timer()
	{
		m_StartTime = std::chrono::high_resolution_clock::now();
	}

	float EllapsedTime()
	{
		auto currentTime = std::chrono::high_resolution_clock::now();
		return std::chrono::duration_cast<std::chrono::microseconds>(currentTime - m_StartTime).count() * 0.001f;
	}

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTime;
};