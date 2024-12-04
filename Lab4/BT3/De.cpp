#include "De.h"

void De::Keu()
{
	printf("Meeeee\n");
	return;
}

void De::SinhCon()
{
	srand((unsigned int)time(0));
	long long num = SoLuong;
	for (int i = 0; i < num; i++)
		SoLuong += rand() % 2;
}

void De::TinhSua()
{
	srand((unsigned int)time(0));
	for (int i = 0; i < SoLuong; i++)
		TongSua += rand() % 11;
}