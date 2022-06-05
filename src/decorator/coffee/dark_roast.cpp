#include "decorator/coffee/dark_roast.hpp"

double DarkRoast::Cost() const 
{
	return 0.99;
}

const string& DarkRoast::Description() const 
{
	return "Dark Roast";
}
