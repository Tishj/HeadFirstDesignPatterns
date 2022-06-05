#include "decorator/condiment/mocha.hpp"

double Mocha::Cost() const 
{
	double cost = 0;
	if (beverage) {
		cost += beverage->Cost();
	}
	cost += 0.20;
	return cost;
}

const string& Mocha::Description() const 
{
	return "Mocha";
}
