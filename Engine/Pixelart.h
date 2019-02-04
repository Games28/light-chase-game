#pragma once
#include "Graphics.h"
#include "Location.h"
#include "Keyboard.h"
#include "Direction.h"
class Pixelart
{
public:
	Pixelart(int in_x, int in_y);
	//felcon image code
	void DrawFelconUp(Graphics& gfx);
	void DrawFelconDown(Graphics& gfx);
	void DrawFelconLeft(Graphics& gfx);
	void DrawFelconRight(Graphics& gfx);

private:
	Direction dir;
	Location loc;
	Keyboard kbd;
	int vx;
	int vy;
};
