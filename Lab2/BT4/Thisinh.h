#pragma once
#include <iostream>
#include <string>
using namespace std;

class ThiSinh
{
	private:
		// Thuoc tinh: Ten, MSSV, ngay, thang, nam sinh, diem Toan, Van, Anh
		string Ten, MSSV;
		int iNgay, iThang, iNam;
		float fToan, fVan, fAnh;
	public:
		/**
		 * @brief Nhap thong tin cua thi sinh.
		 */
		void Nhap();

		/**
		 * @brief Xuat thong tin cua thi sinh.
		 */
		void Xuat();

		/**
		 * @brief Tinh tong diem cac mon Toan, Van, Anh.
		 * @return Tong diem cua thi sinh.
		 */
		float Tong();
};
