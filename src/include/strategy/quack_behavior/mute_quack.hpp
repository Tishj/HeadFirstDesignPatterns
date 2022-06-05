#pragma once

#include "strategy/quack_behavior.hpp"

class MuteQuack : public QuackBehavior {
public:
	MuteQuack() {}
	~MuteQuack() {}
	virtual void Quack() const override;
public:
private:
private:
};
