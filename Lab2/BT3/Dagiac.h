#pragma once
#include "Diem.h"
#include <cmath>

class DaGiac
{
private:
	Diem* Dinh; ///< Mang cac dinh cua da giac
	int n;      ///< So dinh cua da giac
public:
	/**
	 * @brief Nhap thong tin toa do cac dinh cua da giac.
	 */
	void Nhap();

	/**
	 * @brief Xuat toa do cac dinh cua da giac ra man hinh.
	 */
	void Xuat();

	/**
	 * @brief Tinh tien da giac theo vector (u, v).
	 * @param u Khoang tinh tien theo phuong x
	 * @param v Khoang tinh tien theo phuong y
	 */
	void TinhTien(float u, float v);

	/**
	 * @brief Phong to da giac theo tam O voi ti le k.
	 * @param O Diem tam phong to
	 * @param k Ti le phong to
	 */
	void PhongTo(Diem O, float k);

	/**
	 * @brief Thu nho da giac theo tam O voi ti le k.
	 * @param O Diem tam thu nho
	 * @param k Ti le thu nho
	 */
	void ThuNho(Diem O, float k);

	/**
	 * @brief Quay da giac quanh diem O voi goc quay theta.
	 * @param theta Goc quay tinh bang do
	 * @param O Diem tam quay
	 */
	void Quay(float theta, Diem O);
};
