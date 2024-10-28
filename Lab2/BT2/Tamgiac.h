#pragma once
#include "Diem.h"
#include <cmath>

class TamGiac
{
	private:
		Diem A, B, C;
	public:
		void Nhap();
		void Xuat();
		void TinhTien(float u, float v);
		void PhongTo(Diem O, float k);
		void ThuNho(Diem O, float k);
		void Quay(float theta, Diem O);
};
