#pragma once

#include "common/string.hpp"
#include "common/memory.hpp"

enum class CoffeeType {
	ESPRESSO,
	HOUSE_BLEND,
	DECAF,
	DARK_ROAST
};

class Beverage {
public:
	Beverage() {}
	virtual ~Beverage() {}
public:
	virtual double Cost() const = 0;
	virtual const string& Description() const = 0;
	static unique_ptr<Beverage> Create(CoffeeType type);
protected:
protected:
private:
private:
};
