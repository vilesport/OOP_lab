#include "List.h"

/**
 * @brief Them mot phan tu vao cuoi danh sach.
 * @param x Phan tu can them vao.
 * Thuc hien them vao bang cach tao 1 array moi voi size + 1 phan tu, sau do copy array cu sang array moi
 * gan phan tu cuoi cung cua array moi = x va delete array cu.
 */
void List::Push(double x)
{
	double* tmp = new double[size + 1];
	memcpy(tmp, arr, sizeof(double) * (size));
	delete[] arr;
	arr = tmp;
	arr[size] = x;
	size++;
	return;
}

/**
 * @brief Xoa lan xuat hien dau tien cua phan tu x trong danh sach.
 * @param x Phan tu can xoa.
 * Tim phan tu x dau tien can xoa, sau do doi cac phan tu o sau x ghi de len x de xoa x khoi mang.
 * Cuoi cung tao 1 array moi co size-1 roi sao chep array sau khi xoa sang, delete array cu.
 */
void List::Pop(double x)
{
	for (unsigned int i = 0; i < size; i++)
		if (arr[i] == x)
		{
			for (unsigned int j = i; j < size - 1; j++)
				arr[j] = arr[j + 1];
			break;
		}
	size--;
	double* tmp = new double[size];
	memcpy(tmp, arr, sizeof(double) * size);
	delete[] arr;
	arr = tmp;
	return;
}

/**
 * @brief Xoa tat ca cac lan xuat hien cua phan tu x trong danh sach.
 * @param x Phan tu can xoa.
 * Dem so luong phan tu = x luu vao count, sau do tao 1 array moi co size - count phan tu
 * sao chep cac phan tu khac x vao array moi va delete array cu.
 */
void List::Delete(double x)
{
	int count = 0;
	for (unsigned int i = 0; i < size; i++)
		count += (arr[i] == x);
	double* tmp = new double[size - count];
	count = 0;
	for (unsigned int i = 0; i < size; i++)
		if (arr[i] != x)
		{
			tmp[count] = arr[i];
			count++;
		}
	delete[] arr;
	arr = tmp;
	size = count;
	return;
}

/**
 * @brief Sua doi phan tu tai chi so cu the trong danh sach.
 * @param x Chi so cua phan tu can sua doi.
 * @param y Gia tri moi de gan vao chi so duoc chi dinh.
 */
void List::Mod(unsigned int x, double y)
{
	if (x >= 0 && x < size)
		arr[x] = y;
	return;
}

/**
 * @brief Hien thi tat ca cac phan tu trong danh sach theo dinh dang.
 */
void List::Display()
{
	cout << "[";
	for (unsigned int i = 0; i < size; i++)
		if (i == size - 1)
			cout << arr[i] << "]";
		else
			cout << arr[i] << ",";
	cout << "\n";
}
