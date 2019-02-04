#include "Felcon.h"

void Felcon::Trail::InitShip(const Location & in_loc)
{
	loc = in_loc;
}

void Felcon::Trail::Inittrail()
{
	t = Felcon::lighttrailColor;
}

const Location & Felcon::Trail::GetLocation() const
{
	return loc;
}

Felcon::Felcon(const Location & loc)
{
	trails[0].InitShip(loc);
}
