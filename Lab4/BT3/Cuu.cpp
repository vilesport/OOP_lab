#include "Cuu.h"

void Cuu::Keu()
{
	printf("Baaaa\n");
	return;
}

void Cuu::SinhCon()
{
	srand((unsigned int)time(0));
	long long num = SoLuong;
	for(int i = 0; i < num; i++)
		SoLuong += rand() % 3;
}

void Cuu::TinhSua()
{
	srand((unsigned int)time(0));
	for (int i = 0; i < SoLuong; i++)
		TongSua += rand() % 6;
}