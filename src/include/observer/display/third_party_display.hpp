#pragma once

#include "observer/display_element.hpp"
#include "observer/observer.hpp"

class ThirdPartyDisplay : public DisplayElement, public Observer {
public:
	ThirdPartyDisplay(Subject* subject) : DisplayElement(), Observer(subject) {}
	virtual ~ThirdPartyDisplay() {}
public:
private:
private:
};
