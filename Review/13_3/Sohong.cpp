#include "Sohong.h"

float SoHong::Tinhthue()
{
	return Dientich * Dongia;
}

string SoHong::GetTen()
{
	return Nguoisohuu.Hoten;
}

string SoHong::GetCMND()
{
	return Nguoisohuu.CMND;
}

void SoHong::Nhap()
{
	cout << "So giay chung nhan: ";
	cin >> Sogiaychungnhan;
	Nguoisohuu.Nhap();
	cout << "So thua dat: ";
	cin >> Sothuadat;
	cout << "So to ban do: ";
	cin >> Sotobando;
	cout << "Dia chi thua dat: ";
	cin.ignore();
	getline(cin, Diachithuadat);
	cout << "Dien tich: ";
	cin >> Dientich;
	return;
}

void SoHong::Xuat()
{
	cout << "So giay chung nhan: " << Sogiaychungnhan << "\n";
	Nguoisohuu.Xuat();
	cout << "So thua dat: " << Sothuadat << "\n";
	cout << "So to ban do: " << Sotobando << "\n";
	cout << "Dia chi thua dat: " << Diachithuadat << "\n";
	cout << "Dien tich: " << Dientich << "\n";
}