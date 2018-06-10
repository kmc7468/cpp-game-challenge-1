#pragma once

#include <cstdint>

namespace turtle
{
	class volume final
	{
	public:
		volume() noexcept = default;
		volume(std::uint16_t width, std::uint16_t height, std::uint16_t depth) noexcept;
		volume(const volume& volume) noexcept;
		~volume() = default;

	public:
		volume& operator=(const volume& volume) noexcept;
		bool operator==(const volume& volume) const noexcept;
		bool operator!=(const volume& volume) const noexcept;

	public:
		std::uint64_t value() const noexcept;

	public:
		std::uint16_t width() const noexcept;
		void width(std::uint16_t new_width) noexcept;
		std::uint16_t height() const noexcept;
		void height(std::uint16_t new_height) noexcept;
		std::uint16_t depth() const noexcept;
		void depth(std::uint16_t new_depth) noexcept;

	private:
		std::uint16_t width_ = 0;
		std::uint16_t height_ = 0;
		std::uint16_t depth_ = 0;
	};
}