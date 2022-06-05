#include "observer/display/forecast_display.hpp"
#include "common/iostream.hpp"
#include "common/exception/not_implemented_exception.hpp"
#include "observer/subject.hpp"
#include "observer/subject/weather_data.hpp"

ForecastDisplay::ForecastDisplay(Subject* subject) : DisplayElement(), Observer(subject) {}
ForecastDisplay::~ForecastDisplay() {}

void ForecastDisplay::Update(Subject* subject)
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

void ForecastDisplay::Display()
{
	cout << "FORECAST_DISPLAY::UPDATE" << endl;
}
