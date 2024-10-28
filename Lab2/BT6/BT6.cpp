#include "Tamgiac.h"

TamGiac a;
float degree, v;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien cac thao tac nhap, tinh tien va xuat toa do tam giac.
 */
int main()
{
	a.Nhap();
	cin >> degree >> v;
	a.TinhTien(degree, v);
	a.Xuat();
}
