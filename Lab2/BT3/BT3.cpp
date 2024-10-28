#include "DaGiac.h"

int main()
{
	Diem O(0, 0);

	DaGiac A;

	A.Nhap();
	A.Xuat();

	A.TinhTien(4, 5);
	A.Xuat();

	A.PhongTo(O, 3);
	A.Xuat();

	A.ThuNho(O, 3);
	A.Xuat();

	A.Quay(90, O);
	A.Xuat();

	return 0;
}
