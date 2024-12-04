#pragma once
#include "GiaSuc.h"

class De : public GiaSuc
{
public:
	De() : GiaSuc() {};
	De(int soluong) : GiaSuc(soluong) {};
	void Keu() override;
	void SinhCon() override;
	void TinhSua() override;
};