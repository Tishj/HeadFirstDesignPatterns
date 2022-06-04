#pragma once

class QuackBehavior {
public:
	QuackBehavior() {}
	virtual void Quack() const = 0;
	virtual ~QuackBehavior() {}
};
