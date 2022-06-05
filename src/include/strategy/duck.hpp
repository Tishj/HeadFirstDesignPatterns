#pragma once

#include "strategy/fly_behavior.hpp"
#include "strategy/quack_behavior.hpp"
#include "common/memory.hpp"

class Duck {
public:
	Duck(unique_ptr<FlyBehavior> fly_behavior, unique_ptr<QuackBehavior> quack_behavior);
public:
	void Fly();
	void Quack();
private:
private:
	unique_ptr<FlyBehavior> fly_behavior;
	unique_ptr<QuackBehavior> quack_behavior;
};
