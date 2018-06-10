#pragma once

#include <turtle/volume.hpp>

#include <cstdint>
#include <string>

namespace turtle
{
	class water_tank_type
	{
	public:
		virtual ~water_tank_type() = default;

	protected:
		water_tank_type(const std::string& name, const std::string& brand, std::uint32_t price,
			const turtle::volume& volume);

	public:
		std::string name() const;
		std::string brand() const;
		std::uint32_t price() const noexcept;
		turtle::volume volume() const noexcept;

	private:
		std::string name_;
		std::string brand_;
		std::uint32_t price_;
		turtle::volume volume_;
	};
}