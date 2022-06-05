#include "observer/subject/weather_data.hpp"

WeatherData::WeatherData() : Subject(SubjectType::WEATHER_DATA)
{
	
}

WeatherData::~WeatherData()
{
	
}

void WeatherData::SetMeasurements()
{
	SetChanged();
	NotifyObservers();
}
