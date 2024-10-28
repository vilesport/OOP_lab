#pragma once
#include <iostream>
using namespace std;
const float PI = 3.14;

class Diem
{
	private:
		float iHoanh, iTung;
	public:
		Diem();
		Diem(float Hoanh, float Tung);
		Diem(const Diem& x);
		void Xuat();
		float GetTungDo();
		float GetHoanhDo();
		void SetTungDo(float Tung);
		void SetHoanhDo(float Hoanh);
		void TinhTien(float degree, float v);
};
