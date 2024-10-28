#pragma once
#include "Thisinh.h"
#include <iomanip>

/**
 * @brief Nhap thong tin cua thi sinh tu ban phim.
 */
void ThiSinh::Nhap()
{
	cout << "Nhap ten thi sinh: ";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap MSSV: ";
	getline(cin, MSSV);
	cout << "Nhap ngay thang nam sinh: ";
	cin >> iNgay >> iThang >> iNam;
	cout << "Nhap diem Toan: ";
	cin >> fToan;
	cout << "Nhap diem Van: ";
	cin >> fVan;
	cout << "Nhap diem Anh: ";
	cin >> fAnh;
}

/**
 * @brief Xuat thong tin cua thi sinh ra man hinh.
 */
void ThiSinh::Xuat()
{
	cout << "Ten: " << Ten << "\n";
	cout << "MSSV: " << MSSV << "\n";
	cout << "Ngay thang nam sinh: " << iNgay << "/" << iThang << "/" << iNam << "\n";
	cout << fixed << setprecision(2) << "Diem Toan: " << fToan << "\nDiem Van: " << fVan << "\n";
	cout << fixed << setprecision(2) << "Diem Anh: " << fAnh << "\n";
}

/**
 * @brief Tinh tong diem cua thi sinh.
 * @return Tong diem cac mon Toan, Van, Anh.
 */
float ThiSinh::Tong()
{
	return fToan + fVan + fAnh;
}
