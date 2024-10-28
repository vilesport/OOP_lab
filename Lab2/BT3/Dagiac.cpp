#pragma once
#include "DaGiac.h"

/**
 * @brief Nhap thong tin toa do cac dinh cua da giac tu nguoi dung.
 */
void DaGiac::Nhap()
{
	cout << "Nhap so dinh: ";
	cin >> n;
	Dinh = new Diem[n + 2];
	float a, b;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap toa do dinh thu " << i + 1 << ": ";
		cin >> a >> b;
		Dinh[i].SetHoanhDo(a);
		Dinh[i].SetTungDo(b);
	}
	return;
}

/**
 * @brief Xuat toa do cac dinh cua da giac ra man hinh.
 */
void DaGiac::Xuat()
{
	cout << "Toa do cac dinh cua da giac:\n";
	for (int i = 0; i < n; i++)
	{
		Dinh[i].Xuat();
		cout << "\n";
	}
	return;
}

/**
 * @brief Tinh tien tat ca cac dinh cua da giac theo vector (u, v).
 * @param u Khoang tinh tien theo phuong x
 * @param v Khoang tinh tien theo phuong y
 * Tinh tien da giac bang cach tinh tien tat ca dinh cua da giac.
 */
void DaGiac::TinhTien(float u, float v)
{
	for (int i = 0; i < n; i++)
		Dinh[i].TinhTien(u, v);
	return;
}

/**
 * @brief Phong to tat ca cac dinh cua da giac theo tam O va ti le k.
 * @param O Diem tam phong to
 * @param k Ti le phong to
 * Phong to da giac bang cach phong to ta ca dinh cua da giac
 */
void DaGiac::PhongTo(Diem O, float k)
{
	float u = O.GetHoanhDo();
	float v = O.GetTungDo();
	for (int i = 0; i < n; i++)
	{
		Dinh[i].SetHoanhDo(u + k * (Dinh[i].GetHoanhDo() - u));
		Dinh[i].SetTungDo(v + k * (Dinh[i].GetTungDo() - v));
	}
	return;
}

/**
 * @brief Thu nho tat ca cac dinh cua da giac theo tam O va ti le k.
 * @param O Diem tam thu nho
 * @param k Ti le thu nho
 * Thu nho da giac bang cach phong to tam giac ti le 1/k.
 */
void DaGiac::ThuNho(Diem O, float k)
{
	PhongTo(O, 1/k);
	return;
}

/**
 * @brief Quay tat ca cac dinh cua da giac quanh diem O voi goc quay theta.
 * @param theta Goc quay tinh bang do
 * @param O Diem tam quay
 * Quay da giac bang cach quay tung dinh cua da giac
 */
void DaGiac::Quay(float theta, Diem O)
{
	for (int i = 0; i < n; i++)
		Dinh[i].Quay(theta, O);
	return;
}
