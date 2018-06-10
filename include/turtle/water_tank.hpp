#pragma once

#include <turtle/water_tank_type.hpp>

namespace turtle
{
	class water_tank final
	{
	public:
		water_tank(const water_tank_type* type);
		water_tank(const water_tank& water_tank) = delete;
		water_tank(water_tank&& water_tank) noexcept = delete;
		~water_tank() = default;

	public:
		water_tank& operator=(const water_tank& water_tank) = delete;
		water_tank& operator=(water_tank&& water_tank) noexcept = delete;
		bool operator==(const water_tank& water_tank) const = delete;
		bool operator!=(const water_tank& water_tank) const = delete;

	public:
		const water_tank_type* type() const noexcept;

	private:
		const water_tank_type* type_;
	};
}