#include "Date.h"

NgayThangNam::NgayThangNam()
{
	iNgay = iThang = iNam = 0;
	return;
}

NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay)
{
	iNgay = Ngay;
	iThang = Thang;
	iNam = Nam;
	return;
}

NgayThangNam::NgayThangNam(int Ngay)
{
	
}

int NgayThangNam::TinhNgay()
{
	return date[Nhuan(iNam)][iNgay] + iNgay;
}

bool NgayThangNam::Nhuan(int nam)
{
	return (nam >= 1000 && (nam % 4 == 0) && ((nam % 100) || (nam % 400 == 0)));
}