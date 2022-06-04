#include "duck.hpp"

Duck::Duck(unique_ptr<FlyBehavior> fly_behavior, unique_ptr<QuackBehavior> quack_behavior) :
	fly_behavior(move(fly_behavior)), quack_behavior(move(quack_behavior))
{
	
}

void Duck::Fly()
{
	fly_behavior->Fly();
}

void Duck::Quack()
{
	quack_behavior->Quack();
}
