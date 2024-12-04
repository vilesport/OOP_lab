#include "Bo.h"

/**
 * @brief Phat ra tieng keu cua bo.
 * @param Khong co tham so dau vao.
 */
void Bo::Keu()
{
	printf("Mooo\n");
	return;
}

/**
 * @brief Sinh con cho bo, tang so luong bo hien co.
 * @param Khong co tham so dau vao.
 */
void Bo::SinhCon()
{
	srand((unsigned int)time(0));
	long long num = SoLuong;
	for (int i = 0; i < num; i++)
		SoLuong += rand() % 2;
}

/**
 * @brief Tinh tong so sua ma tat ca bo trong trang trai cho trong mot chu ky.
 * @param Khong co tham so dau vao.
 */
void Bo::TinhSua()
{
	srand((unsigned int)time(0));
	for (int i = 0; i < SoLuong; i++)
		TongSua += rand() % 21;
}