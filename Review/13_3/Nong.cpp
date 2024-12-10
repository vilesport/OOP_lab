#include "Nong.h"

void Nong::Nhap()
{
	SoHong::Nhap();
	cout << "Thoi han su dung: ";
	cin >> Thoihan;
	cout << "Ngay cap: ";
	cin >> Ngaycap;
	cout << "Don gia: ";
	cin >> Dongia;
}

void Nong::Xuat()
{
	SoHong::Xuat();
	cout << "Thoi han su dung: " << Thoihan << "\n";
	cout << "Ngay cap: " << Ngaycap << "\n";
	cout << "Don gia: " << Dongia << "\n";
}