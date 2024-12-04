#pragma once
#include "Room.h"

class Deluxe : public Room
{
	public:
		Deluxe() : Room() {};
		Deluxe(long long sodem, long long phidv1, long long phidv2);
};