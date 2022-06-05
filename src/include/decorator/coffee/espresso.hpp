#pragma once

#include "decorator/beverage.hpp"

class Espresso : public Beverage {
public:
	Espresso() {}
	~Espresso() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
