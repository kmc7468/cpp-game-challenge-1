#include <turtle/water_tank.hpp>

namespace turtle
{
	water_tank::water_tank(const water_tank_type* type)
		: type_(type)
	{}

	const water_tank_type* water_tank::type() const noexcept
	{
		return type_;
	}
}