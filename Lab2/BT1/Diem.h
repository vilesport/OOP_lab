#pragma once
#include <iostream>
using namespace std;

class Diem
{
	private:
		float iHoanh, iTung; /**< Bien luu toa do x (iHoanh) va y (iTung) cua diem */

	public:
		/**
		 * @brief Khoi tao diem tai toa do (0, 0).
		 */
		Diem();

		/**
		 * @brief Khoi tao diem voi toa do cho truoc.
		 * @param Hoanh Toa do x cua diem.
		 * @param Tung Toa do y cua diem.
		 */
		Diem(float Hoanh, float Tung);

		/**
		 * @brief Khoi tao sao chep, tao mot diem moi giong diem cho truoc.
		 * @param x Diem de sao chep.
		 */
		Diem(const Diem& x);

		/**
		 * @brief Xuat toa do cua diem ra man hinh.
		 */
		void Xuat();

		/**
		 * @brief Lay toa do y (Tung do) cua diem.
		 * @return Toa do y cua diem.
		 */
		float GetTungDo();

		/**
		 * @brief Lay toa do x (Hoanh do) cua diem.
		 * @return Toa do x cua diem.
		 */
		float GetHoanhDo();

		/**
		 * @brief Dat toa do y (Tung do) cho diem.
		 * @param Tung Toa do y moi.
		 */
		void SetTungDo(float Tung);

		/**
		 * @brief Dat toa do x (Hoanh do) cho diem.
		 * @param Hoanh Toa do x moi.
		 */
		void SetHoanhDo(float Hoanh);

		/**
		 * @brief Tinh tien diem theo vector (u, v).
		 * @param u Gia tri tinh tien theo x.
		 * @param v Gia tri tinh tien theo y.
		 */
		void TinhTien(float u, float v);
};
