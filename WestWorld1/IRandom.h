#pragma once

#include <vector>

class IRandom
{
public:
	virtual int Next() = 0;
	virtual int Next(int maxValue) = 0;
	virtual int Next(int minValue, int maxValue) = 0;
	virtual double NextDouble() = 0;
	virtual double NextDouble(double minValue, double maxValue) = 0;
};