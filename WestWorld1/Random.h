#pragma once

#include <random>
#include <memory>

#include "IRandom.h"

class Random : public IRandom
{
	std::mt19937 _randomNumberGenerator;
	std::uniform_real_distribution<double> _realDistribution;
	std::uniform_int_distribution<int> _bytedistribution;
	std::unique_ptr<IRandom> randomService;

public:
	Random(unsigned int seed);
	Random() : Random(std::_Random_device()) {};
	int Next();
	int Next(int maxValue);
	int Next(int minValue, int maxValue);
	double NextDouble();
	double NextDouble(double minValue, double maxValue);

	static Random* m_Instance;
	static Random* GetInstance()
	{
		if (m_Instance == nullptr)
			m_Instance = new Random;

		return m_Instance;
	}
};