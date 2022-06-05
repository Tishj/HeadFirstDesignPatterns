#pragma once

#include "strategy/fly_behavior.hpp"

class NoFly : public FlyBehavior {
public:
	NoFly() {}
	~NoFly() {}
	virtual void Fly() const override;
public:
private:
private:
};
