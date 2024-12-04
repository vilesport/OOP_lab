#include "De.h"

/**
 * @brief Phat ra tieng keu cua de.
 * @param Khong co tham so dau vao.
 */
void De::Keu()
{
	printf("Meeeee\n");
	return;
}

/**
 * @brief Sinh con cho de, tang so luong de hien co.
 * @param Khong co tham so dau vao.
 */
void De::SinhCon()
{
	srand((unsigned int)time(0));
	long long num = SoLuong;
	for (int i = 0; i < num; i++)
		SoLuong += rand() % 2;
}

/**
 * @brief Tinh tong so sua ma tat ca de trong trang trai cho trong mot chu ky.
 * @param Khong co tham so dau vao.
 */
void De::TinhSua()
{
	srand((unsigned int)time(0));
	for (int i = 0; i < SoLuong; i++)
		TongSua += rand() % 11;
}