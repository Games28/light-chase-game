#pragma once
#include "Pixelart.h"
#include "Board.h"

class Felcon
{
private:
	class Trail
	{
	public:
		void Inittrail();

	private:
		Location loc;
		Color t;

	};
public:
	Felcon(const Location& loc);
	void Moveby(const Location& delta_loc);
	void Expand();
	

private:
	static constexpr Color lighttrailColor = Colors::Yellow;
	static constexpr int LightTrailMax = 100;
	Trail trials[LightTrailMax];
	int STrail = 1;
};
