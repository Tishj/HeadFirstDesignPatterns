/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 14:20:34 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/06/05 15:52:58 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "observer/subject/weather_data.hpp"
#include "observer/display/forecast_display.hpp"
#include "observer/display/statistics_display.hpp"
#include "observer/display/current_conditions_display.hpp"
#include "common/memory.hpp"

void	test_displays(unique_ptr<WeatherData>& subject) {
	auto statitics_display = make_unique<StatisticsDisplay>(subject.get());
	auto currnet_conditions_display = make_unique<CurrentConditionsDisplay>(subject.get());
	auto forecast_display = make_unique<ForecastDisplay>(subject.get());
	subject->SetMeasurements();
}

int main() {
	auto weather_data = make_unique<WeatherData>();
	test_displays(weather_data);
}
