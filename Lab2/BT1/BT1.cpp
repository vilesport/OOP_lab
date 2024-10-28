#include "Diem.h"

int main()
{
	float u, v;
	Diem a;
	Diem b(3, 9);
	Diem c(b);

	cout << "a: ";
	a.Xuat();
	cout << "\n";
	cout << "b: ";
	b.Xuat();
	cout << "\n";
	cout << "c: ";
	c.Xuat();
	cout << "\n";

	a.SetTungDo(b.GetTungDo());
	a.SetHoanhDo(c.GetHoanhDo());

	cout << "a: ";
	a.Xuat();
	cout << "\n";
	cout << "b: ";
	b.Xuat();
	cout << "\n";
	cout << "c: ";
	c.Xuat();
	cout << "\n";

	cout << "Nhap vector tinh tien A(u, v): ";
	cin >> u >> v;
	a.TinhTien(u, v);

	cout << "Diem sau khi tinh tien: ";
	a.Xuat();
	cout << "\n";
	return 0;
}
