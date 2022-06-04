#pragma once

#include "fly_behavior.hpp"

class RegularFly : public FlyBehavior {
public:
	RegularFly() {}
	~RegularFly() {}
	virtual void Fly() const override;
public:
private:
private:
};
