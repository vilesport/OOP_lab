#pragma once
#include <iostream>
using namespace std;

const int date[2][14] = {
	{0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
	{0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366} };

class NgayThangNam
{
	private:
		int iNgay, iThang, iNam;
	public:
		NgayThangNam();
		NgayThangNam(int Nam, int Thang, int Ngay);
		NgayThangNam(int Ngay);
		int TinhNgay();
		bool Nhuan(int nam);
};