#pragma once

#include "decorator/beverage.hpp"

class DarkRoast : public Beverage {
public:
	DarkRoast() {}
	~DarkRoast() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
