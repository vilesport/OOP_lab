#include "Diem.h"

int main()
{
	float u, v;
	Diem a;
	Diem b(3, 9);
	Diem c(b);

	cout << "a: ";
	a.Xuat();
	cout << "b: ";
	b.Xuat();
	cout << "c: ";
	c.Xuat();

	a.SetTungDo(b.GetTungDo());
	a.SetHoanhDo(c.GetHoanhDo());

	cout << "a: ";
	a.Xuat();
	cout << "b: ";
	b.Xuat();
	cout << "c: ";
	c.Xuat();

	cout << "Nhap vector tinh tien A(u, v): ";
	cin >> u >> v;
	a.TinhTien(u, v);

	cout << "Diem sau khi tinh tien: ";
	a.Xuat();  // Xuat toa do cua diem a sau khi tinh tien
	return 0;
}
