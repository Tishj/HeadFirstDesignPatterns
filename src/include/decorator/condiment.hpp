#pragma once

#include "decorator/beverage.hpp"
#include "common/memory.hpp"

enum class CondimentType {
	SOY,
	MILK,
	MOCHA,
	WHIP
};

class Condiment : public Beverage {
public:
	Condiment(unique_ptr<Beverage> beverage = nullptr);
	virtual ~Condiment() {}
public:
	virtual double Cost() const = 0;
	virtual const string& Description() const = 0;
	static unique_ptr<Beverage> Create(CondimentType type, unique_ptr<Beverage> = nullptr);
protected:
	unique_ptr<Beverage> beverage;
protected:
private:
private:
};
