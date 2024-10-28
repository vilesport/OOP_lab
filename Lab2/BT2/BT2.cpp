#include "Tamgiac.h"

/**
 * @brief Chuong trinh chinh de kiem tra cac thao tac bien doi hinh hoc tren tam giac.
 *
 * Chuong trinh tao mot diem tam O tai toa do (1,3) va mot tam giac A.
 * Cac phep bien doi duoc thuc hien lan luot tren tam giac A, bao gom:
 * - Nhap toa do tam giac tu nguoi dung.
 * - Tinh tien tam giac.
 * - Phong to tam giac quanh tam O voi ti le k.
 * - Thu nho tam giac quanh tam O voi ti le k.
 * - Quay tam giac quanh tam O mot goc 90 do.
 */
int main()
{

	Diem O(1, 3);

	TamGiac A;

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
