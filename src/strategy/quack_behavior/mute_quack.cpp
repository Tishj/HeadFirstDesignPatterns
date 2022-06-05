#include "strategy/quack_behavior/mute_quack.hpp"
#include "common/iostream.hpp"

void MuteQuack::Quack() const
{
	cout << "<< Silence >>" << endl;
}
