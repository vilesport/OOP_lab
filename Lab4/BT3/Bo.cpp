#include "Bo.h"

void Bo::Keu()
{
	printf("Mooo\n");
	return;
}

void Bo::SinhCon()
{
	srand((unsigned int)time(0));
	long long num = SoLuong;
	for (int i = 0; i < num; i++)
		SoLuong += rand() % 2;
}

void Bo::TinhSua()
{
	srand((unsigned int)time(0));
	for (int i = 0; i < SoLuong; i++)
		TongSua += rand() % 21;
}