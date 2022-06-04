#pragma once

#include "quack_behavior.hpp"

class SqueakQuack : public QuackBehavior {
public:
	SqueakQuack() {}
	~SqueakQuack() {}
	virtual void Quack() const override;
public:
private:
private:
};
