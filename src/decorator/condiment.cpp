/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   condiment.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 20:13:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/06/05 20:26:16 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "decorator/condiment.hpp"
#include "decorator/condiment/list.hpp"
#include "common/exception/not_implemented_exception.hpp"

Condiment::Condiment(unique_ptr<Beverage> beverage) : beverage(move(beverage)) {}

unique_ptr<Beverage> Condiment::Create(CondimentType type, unique_ptr<Beverage> beverage) {
	switch (type) {
		case CondimentType::MOCHA:
			return make_unique_base<Beverage, Mocha>(move(beverage));
		case CondimentType::SOY:
			return make_unique_base<Beverage, Soy>(move(beverage));
		case CondimentType::MILK:
			return make_unique_base<Beverage, Milk>(move(beverage));
		case CondimentType::WHIP:
			return make_unique_base<Beverage, Whip>(move(beverage));
		default:
			throw NotImplementedException("Type not implemented for CondimentType");
	}
}
