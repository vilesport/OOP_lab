#pragma once
#include "Tamgiac.h"

/**
 * @brief Nhap toa do ba dinh cua tam giac tu nguoi dung.
 */
void TamGiac::Nhap()
{
	float a, b;
	cin >> a >> b;
	A.SetHoanhDo(a);
	A.SetTungDo(b);
	cin >> a >> b;
	B.SetHoanhDo(a);
	B.SetTungDo(b);
	cin >> a >> b;
	C.SetHoanhDo(a);
	C.SetTungDo(b);
	return;
}

/**
 * @brief Xuat toa do ba dinh cua tam giac.
 */
void TamGiac::Xuat()
{
	A.Xuat();
	cout << "\n";
	B.Xuat();
	cout << "\n";
	C.Xuat();
	cout << "\n";
	return;
}

/**
 * @brief Tinh tien ca ba dinh cua tam giac theo goc va khoang cach.
 * @param degree Goc tinh bang do (degree).
 * @param v Khoang cach di chuyen.
 */
void TamGiac::TinhTien(float degree, float v)
{
	A.TinhTien(degree, v);
	B.TinhTien(degree, v);
	C.TinhTien(degree, v);
	return;
}
