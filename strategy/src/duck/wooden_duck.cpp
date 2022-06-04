#include "duck/wooden_duck.hpp"
#include "quack_behavior/mute_quack.hpp"
#include "fly_behavior/no_fly.hpp"

WoodenDuck::WoodenDuck() : Duck(make_unique<NoFly>(), make_unique<MuteQuack>()) {}
