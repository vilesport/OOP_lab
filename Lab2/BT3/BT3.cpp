#include "DaGiac.h"

/**
 * @brief Chuong trinh chinh kiem thu cac thao tac bien doi hinh hoc tren da giac.
 *
 * Chuong trinh tao mot diem tam O tai toa do (0,0) va mot doi tuong da giac A.
 * Cac phep bien doi duoc thuc hien lan luot tren da giac A bao gom:
 * - Nhap toa do cac dinh cua da giac tu nguoi dung.
 * - Tinh tien da giac theo vector (4, 5).
 * - Phong to da giac quanh tam O voi ti le 3.
 * - Thu nho da giac quanh tam O voi ti le 3.
 * - Quay da giac quanh tam O mot goc 90 do.
 */
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
