#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
	protected:
		string MaSoNhanVien;
		string Ten;
		long long LuongCoBan;
	public:
		NhanVien() : MaSoNhanVien(""), Ten(""), LuongCoBan(0) {};
		virtual void Nhap();
		virtual void Xuat();
		virtual double TienThuong() = 0;
};