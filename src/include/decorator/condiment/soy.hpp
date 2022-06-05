#pragma once

#include "decorator/condiment.hpp"
#include "common/memory.hpp"

class Soy : public Condiment {
public:
	Soy(unique_ptr<Beverage> beverage = nullptr) : Condiment(move(beverage)) {}
	~Soy() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
