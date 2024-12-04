#include "Deluxe.h"

Deluxe::Deluxe(long long sodem, long long phidv1, long long phidv2)
{
	SoDem = sodem;
	DoanhThu = sodem * 750000 + phidv1 + phidv2;
}