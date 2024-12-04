#pragma once
#include "NhanVien.h"

class KySu : public NhanVien
{
	private:
		long long GioLamThem;
	public:
		KySu() : NhanVien(), GioLamThem(0) {};
		void Nhap() override;
		void Xuat() override;
		double TienThuong() override;
};