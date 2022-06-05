#pragma once

#include "decorator/beverage.hpp"

class HouseBlend : public Beverage {
public:
	HouseBlend() {}
	~HouseBlend() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
