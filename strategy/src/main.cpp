#include "duck/rubber_duck.hpp"
#include "duck/wooden_duck.hpp"
#include "duck/mallard_duck.hpp"

#include "common/memory.hpp"
#include "common/iostream.hpp"
#include <string>
#include <algorithm>

void	TestDuck(const std::string& duck_type, const unique_ptr<Duck>& duck) {
	std::string duck_type_upper(duck_type);
	std::transform(duck_type_upper.begin(), duck_type_upper.end(),duck_type_upper.begin(), ::toupper);
	cout << "--- " << duck_type_upper << " ---" << endl;
	cout << "FLY  : ";
	duck->Fly();
	cout << "QUACK: ";
	duck->Quack();
}

int main() {

	auto rubber_duck = make_unique_base<Duck, RubberDuck>();
	TestDuck("rubber_duck", rubber_duck);
	auto mallard_duck = make_unique_base<Duck, MallardDuck>();
	TestDuck("mallard_duck", mallard_duck);
	auto wooden_duck = make_unique_base<Duck, WoodenDuck>();
	TestDuck("wooden_duck", wooden_duck);
}
