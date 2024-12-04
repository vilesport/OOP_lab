#include "Cuu.h"

/**
 * @brief Phat ra tieng keu cua cuu.
 * @param Khong co tham so dau vao.
 */
void Cuu::Keu()
{
	printf("Baaaa\n");
	return;
}

/**
 * @brief Sinh con cho cuu, tang so luong cuu hien co.
 * @param Khong co tham so dau vao.
 */
void Cuu::SinhCon()
{
	srand((unsigned int)time(0));
	long long num = SoLuong;
	for (int i = 0; i < num; i++)
		SoLuong += rand() % 3;
}

/**
 * @brief Tinh tong so sua ma tat ca cuu trong trang trai cho trong mot chu ky.
 * @param Khong co tham so dau vao.
 */
void Cuu::TinhSua()
{
	srand((unsigned int)time(0));
	for (int i = 0; i < SoLuong; i++)
		TongSua += rand() % 6;
}