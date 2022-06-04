#pragma once

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"
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
