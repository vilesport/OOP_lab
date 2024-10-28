#pragma once
#include <iostream>
using namespace std;
const float PI = 3.14;

class Diem
{
	private:
		float iHoanh, iTung; // Toa do hoanh do va tung do
	public:
		/**
		 * @brief Khoi tao mot diem voi toa do (0, 0).
		 */
		Diem();

		/**
		 * @brief Khoi tao mot diem voi toa do duoc chi dinh.
		 * @param Hoanh Hoanh do cua diem.
		 * @param Tung Tung do cua diem.
		 */
		Diem(float Hoanh, float Tung);

		/**
		 * @brief Khoi tao mot diem bang cach sao chep toa do tu mot diem khac.
		 * @param x Diem can sao chep.
		 */
		Diem(const Diem& x);

		/**
		 * @brief Xuat toa do cua diem.
		 */
		void Xuat();

		/**
		 * @brief Lay gia tri tung do cua diem.
		 * @return Gia tri tung do.
		 */
		float GetTungDo();

		/**
		 * @brief Lay gia tri hoanh do cua diem.
		 * @return Gia tri hoanh do.
		 */
		float GetHoanhDo();

		/**
		 * @brief Thiet lap gia tri tung do cua diem.
		 * @param Tung Gia tri moi cua tung do.
		 */
		void SetTungDo(float Tung);

		/**
		 * @brief Thiet lap gia tri hoanh do cua diem.
		 * @param Hoanh Gia tri moi cua hoanh do.
		 */
		void SetHoanhDo(float Hoanh);

		/**
		 * @brief Tinh tien diem theo mot goc va khoang cach.
		 * @param degree Goc tinh bang do (degree).
		 * @param v Khoang cach di chuyen.
		 */
		void TinhTien(float degree, float v);
};
