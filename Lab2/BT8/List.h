#pragma once
#include <iostream>
using namespace std;

class List
{
	private:
		double* arr;  // Con tro luu tru cac phan tu cua danh sach
		unsigned int size;  // So luong phan tu trong danh sach
	public:
		/**
		 * @brief Khoi tao mot danh sach rong.
		 */
		List()
		{
			arr = NULL;
			size = 0;
		}

		/**
		 * @brief Them mot phan tu vao cuoi danh sach.
		 * @param x Phan tu can them vao.
		 */
		void Push(double x);

		/**
		 * @brief Xoa lan xuat hien dau tien cua phan tu x trong danh sach.
		 * @param x Phan tu can xoa.
		 */
		void Pop(double x);

		/**
		 * @brief Xoa tat ca cac lan xuat hien cua phan tu x trong danh sach.
		 * @param x Phan tu can xoa.
		 */
		void Delete(double x);

		/**
		 * @brief Sua doi phan tu tai chi so cu the trong danh sach.
		 * @param x Chi so cua phan tu can sua doi.
		 * @param y Gia tri moi de gan vao chi so duoc chi dinh.
		 */
		void Mod(unsigned int x, double y);

		/**
		 * @brief Hien thi tat ca cac phan tu trong danh sach theo dinh dang.
		 */
		void Display();
};
