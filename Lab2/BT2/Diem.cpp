#pragma once
#include "Diem.h"

/**
 * @brief Khoi tao diem tai toa do (0, 0).
 */
Diem::Diem()
{
	iHoanh = iTung = 0;
	return;
}

/**
 * @brief Khoi tao diem tai toa do cho truoc.
 * @param Hoanh Hoanh do cua diem
 * @param Tung Tung do cua diem
 */
Diem::Diem(float Hoanh, float Tung)
{
	iHoanh = Hoanh;
	iTung = Tung;
	return;
}

/**
 * @brief Sao chep khoi tao diem moi tu mot diem khac.
 * @param x Doi tuong Diem can sao chep
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
 * @brief Lay tung do cua diem.
 * @return Gia tri tung do cua diem
 */
float Diem::GetTungDo()
{
	return iTung;
}

/**
 * @brief Lay hoanh do cua diem.
 * @return Gia tri hoanh do cua diem
 */
float Diem::GetHoanhDo()
{
	return iHoanh;
}

/**
 * @brief Dat tung do moi cho diem.
 * @param Tung Gia tri tung do moi
 */
void Diem::SetTungDo(float Tung)
{
	iTung = Tung;
	return;
}

/**
 * @brief Dat hoanh do moi cho diem.
 * @param Hoanh Gia tri hoanh do moi
 */
void Diem::SetHoanhDo(float Hoanh)
{
	iHoanh = Hoanh;
	return;
}

/**
 * @brief Tinh tien diem theo vector (u, v).
 * @param u Khoang cach tinh tien theo phuong x
 * @param v Khoang cach tinh tien theo phuong y
 */
void Diem::TinhTien(float u, float v)
{
	iHoanh += u;
	iTung += v;
	return;
}
