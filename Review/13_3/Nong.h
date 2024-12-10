#pragma once
#include "Sohong.h"

class Nong : public SoHong
{
	private:
		int Thoihan;
	public:
		Nong() : SoHong(), Thoihan(0) {}
		int Getthoihan() {
			return Thoihan;
		}
		void Nhap() override;
		void Xuat() override;
};