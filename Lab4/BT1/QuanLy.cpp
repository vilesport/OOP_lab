#include "QuanLy.h"

/**
 * @brief Nhap thong tin cua quan ly, bao gom thong tin co ban va ti le thuong.
 * @param Khong co tham so dau vao.
 */
void QuanLy::Nhap()
{
	NhanVien::Nhap();
	cout << "Ti le thuong: ";
	cin >> TiLeThuong;
}

/**
 * @brief Xuat thong tin cua quan ly, bao gom thong tin co ban va tien thuong.
 * @param Khong co tham so dau vao.
 */
void QuanLy::Xuat()
{
	NhanVien::Xuat();
	printf("Tien thuong: %.2f\n", TienThuong());
}

/**
 * @brief Tinh tien thuong cua quan ly dua tren ti le thuong va luong co ban.
 * @param Khong co tham so dau vao.
 * @return Tien thuong cua quan ly (double).
 */
double QuanLy::TienThuong()
{
	return TiLeThuong * LuongCoBan;
}