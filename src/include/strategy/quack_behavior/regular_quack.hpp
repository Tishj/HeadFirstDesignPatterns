#pragma once

#include "strategy/quack_behavior.hpp"

class RegularQuack : public QuackBehavior {
public:
	RegularQuack() {}
	~RegularQuack() {}
	virtual void Quack() const override;
public:
private:
private:
};
