#pragma once

#include "observer/display_element.hpp"
#include "observer/observer.hpp"

class CurrentConditionsDisplay : public DisplayElement, public Observer {
public:
	CurrentConditionsDisplay(Subject* subject);
	~CurrentConditionsDisplay();
public:
	void Update(Subject* subject) override;
	void Display() override;
private:
private:
};
