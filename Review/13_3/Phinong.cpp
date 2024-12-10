#include "Phinong.h"

void PhiNong::Nhap()
{
	SoHong::Nhap();
	cout << "Ngay cap: ";
	cin >> Ngaycap;
	cout << "Don gia: ";
	cin >> Dongia;
}

void PhiNong::Xuat()
{
	SoHong::Xuat();
	cout << "Ngay cap: " << Ngaycap << "\n";
	cout << "Don gia: " << Dongia << "\n";
}