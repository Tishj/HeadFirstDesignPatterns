/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 19:42:21 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/06/05 20:39:18 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "decorator/condiment/mocha.hpp"
#include "decorator/condiment/soy.hpp"
#include "decorator/condiment/milk.hpp"
#include "decorator/condiment/whip.hpp"

#include "decorator/coffee/house_blend.hpp"
#include "decorator/coffee/dark_roast.hpp"
#include "decorator/coffee/decaf.hpp"
#include "decorator/coffee/espresso.hpp"

#include "common/memory.hpp"
#include "common/iostream.hpp"

unique_ptr<Beverage> AddSoy(unique_ptr<Beverage> beverage) {
	return Condiment::Create(CondimentType::SOY, move(beverage));
}

unique_ptr<Beverage> AddMilk(unique_ptr<Beverage> beverage) {
	return Condiment::Create(CondimentType::SOY, move(beverage));
}

unique_ptr<Beverage> AddMocha(unique_ptr<Beverage> beverage) {
	return Condiment::Create(CondimentType::MOCHA, move(beverage));
}

unique_ptr<Beverage> AddWhip(unique_ptr<Beverage> beverage) {
	return Condiment::Create(CondimentType::WHIP, move(beverage));
}

unique_ptr<Beverage> MakeDoubleMochaSoyLatteWithWhip() {
	auto beverage = Beverage::Create(CoffeeType::HOUSE_BLEND);
	beverage = AddSoy(move(beverage));
	beverage = AddMocha(move(beverage));
	beverage = AddMocha(move(beverage));
	beverage = AddWhip(move(beverage));
	return beverage;
}

int main() {
	auto beverage = MakeDoubleMochaSoyLatteWithWhip();
	auto cost = beverage->Cost();

	cout << "The price of a double mocha soy latte with whip is $" << cost << endl;
}
