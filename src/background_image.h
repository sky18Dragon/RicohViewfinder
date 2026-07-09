#pragma once

#include <cstddef>
#include <cstdint>

constexpr std::size_t BACKGROUND_IMAGE_WIDTH = 240;
constexpr std::size_t BACKGROUND_IMAGE_HEIGHT = 135;
constexpr uint16_t BACKGROUND_IMAGE_FALLBACK_RGB565 = 0x1082;

const uint16_t* backgroundImageData();
uint16_t backgroundImagePixel(std::size_t x, std::size_t y);
