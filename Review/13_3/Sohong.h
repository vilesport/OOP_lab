#pragma once
#include "Nguoi.h"

class SoHong
{
	protected:
		string Sogiaychungnhan;	
		Nguoi Nguoisohuu;
		int Sothuadat;
		int Sotobando;
		string Diachithuadat;
		float Dientich;
		string Ngaycap;
		float Dongia;

	public:
		SoHong() : Sogiaychungnhan(""),
			Nguoisohuu(),
			Sothuadat(0),
			Sotobando(0),
			Diachithuadat(""),
			Dientich(0.0),
			Ngaycap(""),
			Dongia(0.0) {}
		virtual float Tinhthue();
		virtual string GetTen();
		virtual string GetCMND();
		virtual void Nhap();
		virtual void Xuat();
};