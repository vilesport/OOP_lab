#include "NhanVien.h"

void NhanVien::Nhap()
{
	cout << "Ma so nhan vien: ";
	cin >> MaSoNhanVien;
	cout << "Ten nhan vien: ";
	cin.ignore();
	getline(cin, Ten);
	cout << "Luong co ban: ";
	cin >> LuongCoBan;
}

void NhanVien::Xuat()
{
	printf("Ma so nhan vien: %s\n", &MaSoNhanVien[0]);
	printf("Ten nhan vien: %s\n", &Ten[0]);
	printf("Luong co ban: %lld\n", LuongCoBan);
}