#include "Premium.h"

/**
 * @brief Khoi tao doi tuong phong Premium voi so dem o va phi dich vu.
 * @param sodem So dem khach o (long long).
 * @param phidv Phi dich vu (long long).
 */
Premium::Premium(long long sodem, long long phidv)
{
	SoDem = sodem;
	DoanhThu = sodem * 500000 + phidv;
}