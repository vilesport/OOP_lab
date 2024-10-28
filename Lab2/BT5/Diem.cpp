#pragma once
#include "Diem.h"

/**
 * @brief Khoi tao mot diem voi toa do (0, 0).
 */
Diem::Diem()
{
	iHoanh = iTung = 0;
	return;
}

/**
 * @brief Khoi tao mot diem voi toa do duoc chi dinh.
 * @param Hoanh Hoanh do cua diem.
 * @param Tung Tung do cua diem.
 */
Diem::Diem(float Hoanh, float Tung)
{
	iHoanh = Hoanh;
	iTung = Tung;
	return;
}

/**
 * @brief Khoi tao mot diem bang cach sao chep toa do tu mot diem khac.
 * @param x Diem can sao chep.
 */
Diem::Diem(const Diem& x)
{
	iHoanh = x.iHoanh;
	iTung = x.iTung;
	return;
}

/**
 * @brief Xuat toa do cua diem.
 */
void Diem::Xuat()
{
	printf("(%f,%f)", iHoanh, iTung);
	return;
}

/**
 * @brief Lay gia tri tung do cua diem.
 * @return Gia tri tung do.
 */
float Diem::GetTungDo()
{
	return iTung;
}

/**
 * @brief Lay gia tri hoanh do cua diem.
 * @return Gia tri hoanh do.
 */
float Diem::GetHoanhDo()
{
	return iHoanh;
}

/**
 * @brief Thiet lap gia tri tung do cua diem.
 * @param Tung Gia tri moi cua tung do.
 */
void Diem::SetTungDo(float Tung)
{
	iTung = Tung;
	return;
}

/**
 * @brief Thiet lap gia tri hoanh do cua diem.
 * @param Hoanh Gia tri moi cua hoanh do.
 */
void Diem::SetHoanhDo(float Hoanh)
{
	iHoanh = Hoanh;
	return;
}

/**
 * @brief Tinh tien diem theo mot vector (u, v).
 * @param u Gia tri tinh tien theo phuong x.
 * @param v Gia tri tinh tien theo phuong y.
 * Tinh tien 1 diem A(x, y) 1 vector B(u, v) se tao ra diem A'(x + u, y + v).
 */
void Diem::TinhTien(float u, float v)
{
	iHoanh += u;
	iTung += v;
	return;
}
