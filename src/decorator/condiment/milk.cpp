#include "decorator/condiment/milk.hpp"

double Milk::Cost() const 
{
	double cost = 0;
	if (beverage) {
		cost += beverage->Cost();
	}
	cost += 0.10;
	return cost;
}

const string& Milk::Description() const 
{
	return "Milk";
}
