#pragma once
#include <iostream>
using namespace std;
const float PI = (float)3.14159265358979323846;

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
		 * @brief Tinh tien diem theo mot vector (u, v).
		 * @param u Gia tri tinh tien theo phuong x.
		 * @param v Gia tri tinh tien theo phuong y.
		 */
		void TinhTien(float u, float v);
};
