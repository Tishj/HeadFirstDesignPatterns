#pragma once

#include "decorator/condiment.hpp"
#include "common/memory.hpp"

class Mocha : public Condiment {
public:
	Mocha(unique_ptr<Beverage> beverage = nullptr) : Condiment(move(beverage)) {}
	~Mocha() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
