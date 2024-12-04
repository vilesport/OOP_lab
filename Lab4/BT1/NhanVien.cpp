#include "NhanVien.h"

/**
 * @brief Nhap thong tin co ban cua nhan vien, bao gom ma so, ten, va luong co ban.
 * @param Khong co tham so dau vao.
 */
void NhanVien::Nhap()
{
	cout << "Ma so nhan vien: ";
	cin >> MaSoNhanVien;
	cout << "Ten nhan vien: ";
	cin.ignore();
	getline(cin, Ten);
	cout << "Luong co ban: ";
	cin >> LuongCoBan;
}

/**
 * @brief Xuat thong tin co ban cua nhan vien, bao gom ma so, ten, va luong co ban.
 * @param Khong co tham so dau vao.
 */
void NhanVien::Xuat()
{
	printf("Ma so nhan vien: %s\n", &MaSoNhanVien[0]);
	printf("Ten nhan vien: %s\n", &Ten[0]);
	printf("Luong co ban: %lld\n", LuongCoBan);
}