#include "duck/mallard_duck.hpp"
#include "quack_behavior/regular_quack.hpp"
#include "fly_behavior/regular_fly.hpp"

MallardDuck::MallardDuck() : Duck(make_unique<RegularFly>(), make_unique<RegularQuack>()) {}
