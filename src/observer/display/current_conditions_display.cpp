#include "observer/display/current_conditions_display.hpp"
#include "common/iostream.hpp"
#include "observer/subject.hpp"
#include "common/exception/not_implemented_exception.hpp"
#include "observer/subject/weather_data.hpp"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* subject) : DisplayElement(), Observer(subject) {}
CurrentConditionsDisplay::~CurrentConditionsDisplay() {}

void CurrentConditionsDisplay::Update(Subject* subject)
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

void CurrentConditionsDisplay::Display()
{
	cout << "CURRENT_CONDITIONS_DISPLAY::UPDATE" << endl;
}
