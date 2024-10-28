#pragma once
#include "Diem.h"
#include <cmath>

class TamGiac
{
	private:
		Diem A, B, C; // Ba dinh cua tam giac
	public:
		/**
		 * @brief Nhap toa do ba dinh cua tam giac.
		 */
		void Nhap();

		/**
		 * @brief Xuat toa do ba dinh cua tam giac.
		 */
		void Xuat();

		/**
		 * @brief Tinh tien ca ba dinh cua tam giac theo goc va khoang cach.
		 * @param degree Goc tinh bang do (degree).
		 * @param v Khoang cach di chuyen.
		 */
		void TinhTien(float degree, float v);
};
