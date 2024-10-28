#include "Diem.h"

/**
 * @brief Chuong trinh chinh kiem tra cac thao tac tren doi tuong diem.
 *
 * Chuong trinh tao va kiem thu cac doi tuong Diem bang cach:
 * - Khoi tao diem mac dinh va cac diem voi toa do chi dinh.
 * - Sao chep diem.
 * - Thay doi toa do cua diem.
 * - Thuc hien phep tinh tien diem theo vector nguoi dung nhap.
 */
int main()
{
	Diem a;          // Tao diem a tai toa do (0, 0)
	Diem b(3, 9);    // Tao diem b tai toa do (3, 9)
	Diem c(b);       // Sao chep diem b thanh diem c

	cout << "a: ";
	a.Xuat();  // Xuat toa do cua diem a
	cout << "b: ";
	b.Xuat();  // Xuat toa do cua diem b
	cout << "c: ";
	c.Xuat();  // Xuat toa do cua diem c

	// Gan toa do y cua b cho a va toa do x cua c cho a
	a.SetTungDo(b.GetTungDo());
	a.SetHoanhDo(c.GetHoanhDo());

	cout << "a: ";
	a.Xuat();  // Xuat toa do cua diem a sau khi thay doi
	cout << "b: ";
	b.Xuat();
	cout << "c: ";
	c.Xuat();

	// Nhap vector tinh tien tu nguoi dung va thuc hien tinh tien cho diem a
	cout << "Nhap vector tinh tien A(u, v): ";
	cin >> u >> v;
	a.TinhTien(u, v);

	cout << "Diem sau khi tinh tien: ";
	a.Xuat();  // Xuat toa do cua diem a sau khi tinh tien
	return 0;
}
