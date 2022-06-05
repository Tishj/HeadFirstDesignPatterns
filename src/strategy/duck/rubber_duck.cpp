#include "strategy/duck/rubber_duck.hpp"
#include "strategy/quack_behavior/squeak_quack.hpp"
#include "strategy/fly_behavior/no_fly.hpp"

RubberDuck::RubberDuck() : Duck(make_unique<NoFly>(), make_unique<SqueakQuack>()) {}
