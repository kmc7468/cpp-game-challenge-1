#include <turtle/water_tank_type.hpp>

namespace turtle
{
	water_tank_type::water_tank_type(const std::string& name, const std::string& brand,
		std::uint32_t price, const turtle::volume& volume)
		: name_(name), brand_(brand), price_(price), volume_(volume)
	{}

	std::string water_tank_type::name() const
	{
		return name_;
	}
	std::string water_tank_type::brand() const
	{
		return brand_;
	}
	std::uint32_t water_tank_type::price() const noexcept
	{
		return price_;
	}
	turtle::volume water_tank_type::volume() const noexcept
	{
		return volume_;
	}
}