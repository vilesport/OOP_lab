#include "KySu.h"

/**
 * @brief Nhap thong tin cua ky su, bao gom thong tin co ban va so gio lam them.
 * @param Khong co tham so dau vao.
 */
void KySu::Nhap()
{
	NhanVien::Nhap();
	cout << "So gio lam them: ";
	cin >> GioLamThem;
}

/**
 * @brief Xuat thong tin cua ky su, bao gom thong tin co ban va tien thuong.
 * @param Khong co tham so dau vao.
 */
void KySu::Xuat()
{
	NhanVien::Xuat();
	printf("Tien thuong: %lld\n", (long long)TienThuong());
}

/**
 * @brief Tinh tien thuong cua ky su.
 * @param Khong co tham so dau vao.
 * @return Tien thuong cua ky su (double).
 */
double KySu::TienThuong()
{
	return GioLamThem * 100000 + LuongCoBan;
}