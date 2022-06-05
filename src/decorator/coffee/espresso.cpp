#include "decorator/coffee/espresso.hpp"

double Espresso::Cost() const 
{
	return 1.99;
}

const string& Espresso::Description() const 
{
	return "Espresso";
}
