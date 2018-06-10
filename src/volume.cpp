#include <turtle/volume.hpp>

namespace turtle
{
	volume::volume(std::uint16_t width, std::uint16_t height, std::uint16_t depth) noexcept
		: width_(width), height_(height), depth_(depth)
	{}
	volume::volume(const volume& volume) noexcept
		: width_(volume.width_), height_(volume.height_), depth_(volume.depth_)
	{}

	volume& volume::operator=(const volume& volume) noexcept
	{
		width_ = volume.width_;
		height_ = volume.height_;
		depth_ = volume.depth_;

		return *this;
	}
	bool volume::operator==(const volume& volume) const noexcept
	{
		return width_ == volume.width_ && height_ == volume.height_ && depth_ == volume.depth_;
	}
	bool volume::operator!=(const volume& volume) const noexcept
	{
		return width_ != volume.width_ || height_ != volume.height_ || depth_ != volume.depth_;
	}

	std::uint64_t volume::value() const noexcept
	{
		return width_ * height_ * depth_;
	}

	std::uint16_t volume::width() const noexcept
	{
		return width_;
	}
	void volume::width(std::uint16_t new_width) noexcept
	{
		width_ = new_width;
	}
	std::uint16_t volume::height() const noexcept
	{
		return height_;
	}
	void volume::height(std::uint16_t new_height) noexcept
	{
		height_ = new_height;
	}
	std::uint16_t volume::depth() const noexcept
	{
		return depth_;
	}
	void volume::depth(std::uint16_t new_depth) noexcept
	{
		depth_ = new_depth;
	}
}