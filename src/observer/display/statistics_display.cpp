#include "observer/display/statistics_display.hpp"
#include "common/iostream.hpp"
#include "common/exception/not_implemented_exception.hpp"
#include "observer/subject.hpp"
#include "observer/subject/weather_data.hpp"

StatisticsDisplay::StatisticsDisplay(Subject* subject) : DisplayElement(), Observer(subject) {}
StatisticsDisplay::~StatisticsDisplay() {}

void StatisticsDisplay::Update(Subject* subject)
{
	switch (subject->Type()) {
		case SubjectType::WEATHER_DATA: {
			auto weather_data = (WeatherData*)subject;
			//get relevant data from subject
			break;
		}
		default: {
			throw NotImplementedException("Type not implemented for SubjectType");
		}
	}
	Display();
}

void StatisticsDisplay::Display()
{
	cout << "STATISTICS_DISPLAY::UPDATE" << endl;
}
