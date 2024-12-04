#pragma once
#include "GiaSuc.h"

class Bo : public GiaSuc
{
	public:
		Bo() : GiaSuc() {};
		Bo(int soluong) : GiaSuc(soluong) {};
		void Keu() override;
		void SinhCon() override;
		void TinhSua() override;
};