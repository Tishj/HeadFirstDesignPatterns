#include "decorator/condiment/soy.hpp"

double Soy::Cost() const 
{
	double cost = 0;
	if (beverage) {
		cost += beverage->Cost();
	}
	cost += 0.15;
	return cost;
}

const string& Soy::Description() const 
{
	return "Soy";
}
