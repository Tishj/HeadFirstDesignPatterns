#include "decorator/coffee/decaf.hpp"

double Decaf::Cost() const 
{
	return 1.05;
}

const string& Decaf::Description() const 
{
	return "Decaf";
}
