#pragma once

#include "decorator/beverage.hpp"

class Decaf : public Beverage {
public:
	Decaf() {}
	~Decaf() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
