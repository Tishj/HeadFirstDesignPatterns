#include "strategy/duck/mallard_duck.hpp"
#include "strategy/quack_behavior/regular_quack.hpp"
#include "strategy/fly_behavior/regular_fly.hpp"

MallardDuck::MallardDuck() : Duck(make_unique<RegularFly>(), make_unique<RegularQuack>()) {}
