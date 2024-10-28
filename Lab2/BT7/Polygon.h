#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Diem
{
	float x, y; // Toa do cua diem
};

class Poly
{
	private:
		vector <Diem> arr; // Danh sach cac diem cua da giac
		Diem centroid; // Trong tam cua da giac
	public:
		/**
		 * @brief Khoi tao mot da giac rong va dat trong tam ve (0, 0).
		 */
		Poly()
		{
			arr.clear();
			centroid = { 0, 0 };
		}

		/**
		 * @brief Nhap thong tin cac diem cua da giac.
		 */
		void Nhap();

		/**
		 * @brief Tinh trong tam cua da giac.
		 */
		void Timtrongtam();

		/**
		 * @brief Sap xep cac diem theo goc voi trong tam.
		 */
		void Sapxep();

		/**
		 * @brief Tinh goc giua mot diem voi trong tam.
		 * @param a Diem can tinh goc.
		 * @return Goc cua diem a voi trong tam (don vi radian).
		 */
		float Goc(Diem a);

		/**
		 * @brief Tinh dien tich cua da giac.
		 * @return Dien tich cua da giac.
		 */
		float Tinhdientich();
};
