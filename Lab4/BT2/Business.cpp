#include "Business.h"

/**
 * @brief Khoi tao doi tuong phong Business voi so dem o va tinh doanh thu.
 * @param sodem So dem khach o (long long).
 */
Business::Business(long long sodem)
{
	SoDem = sodem;
	DoanhThu = sodem * 300000;
}