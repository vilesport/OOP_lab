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
		void TinhTien(float degree, float v);
};
