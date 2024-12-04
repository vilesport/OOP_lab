#include "Deluxe.h"

/**
 * @brief Khoi tao doi tuong phong Deluxe voi so dem o va cac phi dich vu bo sung.
 * @param sodem So dem khach o (long long).
 * @param phidv1 Phi dich vu thu nhat (long long).
 * @param phidv2 Phi dich vu thu hai (long long).
 */
Deluxe::Deluxe(long long sodem, long long phidv1, long long phidv2)
{
	SoDem = sodem;
	DoanhThu = sodem * 750000 + phidv1 + phidv2;
}