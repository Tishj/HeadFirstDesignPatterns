#include "strategy/duck/wooden_duck.hpp"
#include "strategy/quack_behavior/mute_quack.hpp"
#include "strategy/fly_behavior/no_fly.hpp"

WoodenDuck::WoodenDuck() : Duck(make_unique<NoFly>(), make_unique<MuteQuack>()) {}
