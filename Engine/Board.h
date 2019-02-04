#pragma once

#include "Location.h"
#include "Graphics.h"
#include "Pixelart.h"

class Board
{
public:
	Board(Graphics& gfx);
	void ImageUpdate();

private:
	static constexpr int dimension = 28;
	Graphics& gfx;
};
