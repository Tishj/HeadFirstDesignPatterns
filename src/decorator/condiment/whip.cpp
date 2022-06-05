#include "decorator/condiment/whip.hpp"

double Whip::Cost() const 
{
	double cost = 0;
	if (beverage) {
		cost += beverage->Cost();
	}
	cost += 0.10;
	return cost;
}

const string& Whip::Description() const 
{
	return "Whip";
}
