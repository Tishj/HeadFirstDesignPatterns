/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   beverage.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 20:13:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/06/05 20:22:28 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "decorator/beverage.hpp"
#include "decorator/coffee/list.hpp"
#include "common/exception/not_implemented_exception.hpp"

unique_ptr<Beverage> Beverage::Create(CoffeeType type) {
	switch (type) {
		case CoffeeType::DARK_ROAST:
			return make_unique_base<Beverage, DarkRoast>();
		case CoffeeType::DECAF:
			return make_unique_base<Beverage, Decaf>();
		case CoffeeType::HOUSE_BLEND:
			return make_unique_base<Beverage, HouseBlend>();
		case CoffeeType::ESPRESSO:
			return make_unique_base<Beverage, Espresso>();
		default:
			throw NotImplementedException("Type not implemented for CoffeeType");
	}
}
