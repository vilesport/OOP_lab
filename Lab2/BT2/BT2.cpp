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
	// Khoi tao diem tam O tai toa do (1, 3)
	Diem O(1, 3);

	// Khoi tao mot doi tuong tam giac A
	TamGiac A;

	// Nhap toa do cac dinh cua tam giac
	A.Nhap();

	// Xuat toa do tam giac vua nhap
	A.Xuat();

	// Tinh tien tam giac theo vector (4, 5)
	A.TinhTien(4, 5);
	A.Xuat();

	// Phong to tam giac theo tam O voi ti le 3
	A.PhongTo(O, 3);
	A.Xuat();

	// Thu nho tam giac theo tam O voi ti le 3
	A.ThuNho(O, 3);
	A.Xuat();

	// Quay tam giac quanh tam O voi goc 90 do
	A.Quay(90, O);
	A.Xuat();

	return 0;
}
