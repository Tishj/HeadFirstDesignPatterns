#pragma once

#include "observer/display_element.hpp"
#include "observer/observer.hpp"

class ForecastDisplay : public DisplayElement, public Observer {
public:
	ForecastDisplay(Subject* subject);
	~ForecastDisplay();
public:
	void Update(Subject* subject) override;
	void Display() override;
private:
private:
};
