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
	// Khoi tao diem tam O tai toa do (0, 0)
	Diem O(0, 0);

	// Khoi tao mot doi tuong da giac A
	DaGiac A;

	// Nhap toa do cac dinh cua da giac tu nguoi dung
	A.Nhap();

	// Xuat toa do cua cac dinh da giac
	A.Xuat();

	// Tinh tien da giac theo vector (4, 5)
	A.TinhTien(4, 5);
	A.Xuat();

	// Phong to da giac quanh tam O voi ti le 3
	A.PhongTo(O, 3);
	A.Xuat();

	// Thu nho da giac quanh tam O voi ti le 3
	A.ThuNho(O, 3);
	A.Xuat();

	// Quay da giac quanh tam O mot goc 90 do
	A.Quay(90, O);
	A.Xuat();

	return 0;
}
