#include "Random.h"
#include <random>

Random* Random::m_Instance = nullptr;

Random::Random(unsigned int seed)
{
	this->_randomNumberGenerator = std::mt19937(seed);
	this->_realDistribution = std::uniform_real_distribution<double>();
	this->_bytedistribution = std::uniform_int_distribution<int>(0, 256);


}

int Random::Next()
{
	return this->Next(0, INT32_MAX);
}

int Random::Next(int maxValue)
{
	return this->Next(0, maxValue);
}

int Random::Next(int minValue, int maxValue)
{
	std::uniform_int_distribution<int> distribution(minValue, maxValue);
	return distribution(this->_randomNumberGenerator);
}

double Random::NextDouble()
{
	return this->_realDistribution(this->_randomNumberGenerator);
}

double Random::NextDouble(double minValue, double maxValue)
{
	std::uniform_real_distribution<double> distribution(minValue, minValue);
	return this->_realDistribution(this->_randomNumberGenerator);
}