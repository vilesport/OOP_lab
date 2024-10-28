#pragma once
#include "Diem.h"

/**
 * @brief Khoi tao diem tai toa do goc (0, 0).
 */
Diem::Diem()
{
	iHoanh = iTung = 0;
	return;
}

/**
 * @brief Khoi tao diem voi toa do x va y.
 * @param Hoanh Toa do x cua diem.
 * @param Tung Toa do y cua diem.
 */
Diem::Diem(float Hoanh, float Tung)
{
	iHoanh = Hoanh;
	iTung = Tung;
	return;
}

/**
 * @brief Khoi tao sao chep diem.
 * @param x Diem can sao chep.
 */
Diem::Diem(const Diem& x)
{
	iHoanh = x.iHoanh;
	iTung = x.iTung;
	return;
}

/**
 * @brief Xuat toa do diem ra man hinh.
 */
void Diem::Xuat()
{
	printf("(%f,%f)", iHoanh, iTung);
	return;
}

/**
 * @brief Lay toa do y cua diem.
 * @return Toa do y cua diem.
 */
float Diem::GetTungDo()
{
	return iTung;
}

/**
 * @brief Lay toa do x cua diem.
 * @return Toa do x cua diem.
 */
float Diem::GetHoanhDo()
{
	return iHoanh;
}

/**
 * @brief Thiet lap toa do y moi cho diem.
 * @param Tung Toa do y moi.
 */
void Diem::SetTungDo(float Tung)
{
	iTung = Tung;
	return;
}

/**
 * @brief Thiet lap toa do x moi cho diem.
 * @param Hoanh Toa do x moi.
 */
void Diem::SetHoanhDo(float Hoanh)
{
	iHoanh = Hoanh;
	return;
}

/**
 * @brief Tinh tien diem theo vector (u, v).
 * @param u Gia tri tinh tien theo x.
 * @param v Gia tri tinh tien theo y.
 */
void Diem::TinhTien(float u, float v)
{
	iHoanh += u;
	iTung += v;
	return;
}
