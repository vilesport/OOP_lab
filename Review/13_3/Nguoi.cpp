#include "Nguoi.h"

void Nguoi::Nhap()
{
	cout << "Ho ten: ";
	cin.ignore();
	getline(cin, Hoten);
	cout << "Nam sinh: ";
	cin >> Namsinh;
	cout << "CMND: ";
	cin >> CMND;
	cout << "Dia chi thuong tru: ";
	cin.ignore();
	getline(cin, Diachi);
}
void Nguoi::Xuat()
{
	cout << "Ho ten: " << Hoten << "\n";
	cout << "Nam sinh: " << Namsinh << "\n";
	cout << "CMND: " << CMND << "\n";
	cout << "Dia chi thuong tru: " << Diachi << "\n";
}