#pragma once
#include "Sohong.h"

class PhiNong : public SoHong
{
	public:
		PhiNong() : SoHong() {}
		void Nhap() override;
		void Xuat() override;
};