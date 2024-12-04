#include "KySu.h"

void KySu::Nhap()
{
	NhanVien::Nhap();
	cout << "So gio lam them: ";
	cin >> GioLamThem;
}

void KySu::Xuat()
{
	NhanVien::Xuat();
	printf("Tien thuong: %lld\n", (long long)TienThuong());
}

double KySu::TienThuong()
{
	return GioLamThem * 100000 + LuongCoBan;
}