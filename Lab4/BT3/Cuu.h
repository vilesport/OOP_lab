#pragma once
#include "GiaSuc.h"

class Cuu : public GiaSuc
{
	public:
		Cuu() : GiaSuc() {};
		Cuu(int soluong) : GiaSuc(soluong) {};
		void Keu() override;
		void SinhCon() override;
		void TinhSua() override;
};