#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class GiaSuc
{
	protected:
		long long TongSua;
		long long SoLuong;
	public:
		GiaSuc() : TongSua(0), SoLuong(0) {};
		GiaSuc(int soluong) : TongSua(0), SoLuong(soluong) {};
		virtual void Keu() = 0;
		virtual void SinhCon() = 0;
		virtual void TinhSua() = 0;
		virtual long long GetSua();
		virtual long long GetSoLuong();
};