#pragma once
#include "Diem.h"
#include <cmath>

class TamGiac
{
	private:
		Diem A, B, C; ///< Cac dinh cua tam giac
	public:
		/**
		 * @brief Nhap toa do cac dinh cua tam giac.
		 */
		void Nhap();

		/**
		 * @brief Xuat toa do cac dinh cua tam giac ra man hinh.
		 */
		void Xuat();

		/**
		 * @brief Tinh tien tam giac theo vector (u, v).
		 * @param u Khoang tinh tien theo phuong x
		 * @param v Khoang tinh tien theo phuong y
		 */
		void TinhTien(float u, float v);

		/**
		 * @brief Phong to tam giac theo tam O voi ti le k.
		 * @param O Diem tam phong to
		 * @param k Ti le phong to
		 */
		void PhongTo(Diem O, float k);

		/**
		 * @brief Thu nho tam giac theo tam O voi ti le k.
		 * @param O Diem tam thu nho
		 * @param k Ti le thu nho
		 */
		void ThuNho(Diem O, float k);

		/**
		 * @brief Quay tam giac quanh diem O voi goc quay theta.
		 * @param theta Goc quay tinh bang do
		 * @param O Diem tam quay
		 */
		void Quay(float theta, Diem O);
};
