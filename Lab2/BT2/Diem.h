#pragma once
#include <iostream>
using namespace std;
const float PI = (float)3.14159265358979323846;

class Diem
{
	private:
		float iHoanh, iTung; ///< Hoanh do va tung do cua diem
	public:
		/**
		 * @brief Khoi tao diem tai toa do (0,0).
		 */
		Diem();

		/**
		 * @brief Khoi tao diem voi hoanh do va tung do cho truoc.
		 * @param Hoanh Hoanh do cua diem
		 * @param Tung Tung do cua diem
		 */
		Diem(float Hoanh, float Tung);

		/**
		 * @brief Sao chep khoi tao diem moi tu mot diem khac.
		 * @param x Doi tuong Diem can sao chep
		 */
		Diem(const Diem& x);

		/**
		 * @brief Xuat toa do diem ra man hinh.
		 */
		void Xuat();

		/**
		 * @brief Lay tung do cua diem.
		 * @return Gia tri tung do cua diem
		 */
		float GetTungDo();

		/**
		 * @brief Lay hoanh do cua diem.
		 * @return Gia tri hoanh do cua diem
		 */
		float GetHoanhDo();

		/**
		 * @brief Dat tung do moi cho diem.
		 * @param Tung Gia tri tung do moi
		 */
		void SetTungDo(float Tung);

		/**
		 * @brief Dat hoanh do moi cho diem.
		 * @param Hoanh Gia tri hoanh do moi
		 */
		void SetHoanhDo(float Hoanh);

		/**
		 * @brief Tinh tien diem theo vector (u, v).
		 * @param u Khoang cach tinh tien theo phuong x
		 * @param v Khoang cach tinh tien theo phuong y
		 */
		void TinhTien(float u, float v);

		/**
		 * @brief Quay diem quanh diem tam O voi goc theta (do).
		 * @param theta Goc quay tinh bang do
		 * @param O Diem tam quay
		 */
		void Quay(float theta, Diem O);
};
