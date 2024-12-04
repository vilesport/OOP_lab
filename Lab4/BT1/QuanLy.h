#pragma once
#include "NhanVien.h"

class QuanLy : public NhanVien
{
	private:
		float TiLeThuong;
	public:
		QuanLy() : NhanVien(), TiLeThuong(0.0) {};
		void Nhap() override;
		void Xuat() override;
		double TienThuong() override;
};