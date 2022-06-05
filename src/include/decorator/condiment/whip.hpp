#pragma once

#include "decorator/condiment.hpp"
#include "common/memory.hpp"

class Whip : public Condiment {
public:
	Whip(unique_ptr<Beverage> beverage = nullptr) : Condiment(move(beverage)) {}
	~Whip() {}
public:
	double Cost() const override;
	const string& Description() const override;
private:
private:
};
