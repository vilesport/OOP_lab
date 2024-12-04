#include "QuanLy.h"

void QuanLy::Nhap()
{
	NhanVien::Nhap();
	cout << "Ti le thuong: ";
	cin >> TiLeThuong;
}

void QuanLy::Xuat()
{
	NhanVien::Xuat();
	printf("Tien thuong: %.2f\n", TienThuong());
}

double QuanLy::TienThuong()
{
	return TiLeThuong * LuongCoBan;
}