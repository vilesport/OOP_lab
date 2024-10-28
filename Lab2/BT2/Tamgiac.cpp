#pragma once
#include "Tamgiac.h"

/**
 * @brief Nhap toa do cac dinh cua tam giac tu nguoi dung.
 */
void TamGiac::Nhap()
{
	float a, b;
	cout << "Nhap toa do dinh A: ";
	cin >> a >> b;
	A.SetHoanhDo(a);
	A.SetTungDo(b);
	cout << "Nhap toa do dinh B: ";
	cin >> a >> b;
	B.SetHoanhDo(a);
	B.SetTungDo(b);
	cout << "Nhap toa do dinh C: ";
	cin >> a >> b;
	C.SetHoanhDo(a);
	C.SetTungDo(b);
	return;
}

/**
 * @brief Xuat toa do cac dinh cua tam giac ra man hinh.
 */
void TamGiac::Xuat()
{
	cout << "Toa do 3 diem cua tam giac\n";
	cout << "A: ";
	A.Xuat();
	cout << "B: ";
	B.Xuat();
	cout << "C: ";
	C.Xuat();
	return;
}

/**
 * @brief Tinh tien tam giac theo vector (u, v).
 * @param u Khoang tinh tien theo phuong x
 * @param v Khoang tinh tien theo phuong y
 */
void TamGiac::TinhTien(float u, float v)
{
	A.TinhTien(u, v);
	B.TinhTien(u, v);
	C.TinhTien(u, v);
	return;
}

/**
 * @brief Phong to tam giac theo tam O voi ti le k.
 * @param O Diem tam phong to
 * @param k Ti le phong to
 * Phong to tam giac bang cach phong to 3 dinh cua tam giac.
 */
void TamGiac::PhongTo(Diem O, float k)
{
	float u = O.GetHoanhDo();
	float v = O.GetTungDo();

	A.SetHoanhDo(u + k * (A.GetHoanhDo() - u));
	A.SetTungDo(v + k * (A.GetTungDo() - v));
	B.SetHoanhDo(u + k * (B.GetHoanhDo() - u));
	B.SetTungDo(v + k * (B.GetTungDo() - v));
	C.SetHoanhDo(u + k * (C.GetHoanhDo() - u));
	C.SetTungDo(v + k * (C.GetTungDo() - v));
	return;
}

/**
 * @brief Thu nho tam giac theo tam O voi ti le k.
 * @param O Diem tam thu nho
 * @param k Ti le thu nho
 * Thu nho tam giac bang cach phong to tam giac voi ti le 1/k
 */
void TamGiac::ThuNho(Diem O, float k)
{
	PhongTo(O, 1 / k);
	return;
}

/**
 * @brief Quay tam giac quanh diem O voi goc quay theta.
 * @param theta Goc quay tinh bang do
 * @param O Diem tam quay
 * Quay tam giac bang cach quay 3 dinh cua tam giac.
 */
void TamGiac::Quay(float theta, Diem O)
{
	A.Quay(theta, O);
	B.Quay(theta, O);
	C.Quay(theta, O);
	return;
}
