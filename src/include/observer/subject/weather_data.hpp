#pragma once

#include "observer/subject.hpp"

class WeatherData : public Subject {
public:
	WeatherData();
	~WeatherData();
public:
	void SetMeasurements();
private:
private:
};
