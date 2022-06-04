#include "duck/rubber_duck.hpp"
#include "quack_behavior/squeak_quack.hpp"
#include "fly_behavior/no_fly.hpp"

RubberDuck::RubberDuck() : Duck(make_unique<NoFly>(), make_unique<SqueakQuack>()) {}
