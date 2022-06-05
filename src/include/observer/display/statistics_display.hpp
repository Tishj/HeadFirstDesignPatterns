#pragma once

#include "observer/display_element.hpp"
#include "observer/observer.hpp"

class StatisticsDisplay : public DisplayElement, public Observer {
public:
	StatisticsDisplay(Subject* subject);
	~StatisticsDisplay();
public:
	void Update(Subject* subject) override;
	void Display() override;
private:
private:
};
