#pragma once

#include "decorator/condiment.hpp"
#include "common/memory.hpp"

class Milk : public Condiment {
public:
	Milk(unique_ptr<Beverage> beverage = nullptr) : Condiment(move(beverage)) {}
	~Milk() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
