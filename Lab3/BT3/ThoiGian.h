#pragma once
#include <iostream>
using namespace std;
#define MAX 90000

class ThoiGian
{
	private:
		int iGio, iPhut, iGiay;
	public:
		ThoiGian();
		ThoiGian(int Gio, int Phut, int Giay);
		ThoiGian(int Giay);
		int TinhGiay();
		void TinhLaiGio(int Giay);
		friend ThoiGian operator + (ThoiGian a, ThoiGian b);
		friend ThoiGian operator - (ThoiGian a, ThoiGian b);
		friend bool operator == (ThoiGian a, ThoiGian b);
		friend bool operator != (ThoiGian a, ThoiGian b);
		friend bool operator >= (ThoiGian a, ThoiGian b);
		friend bool operator <= (ThoiGian a, ThoiGian b);
		friend bool operator > (ThoiGian a, ThoiGian b);
		friend bool operator < (ThoiGian a, ThoiGian b);
		friend istream& operator >> (istream& is, ThoiGian& a);
		friend ostream& operator << (ostream& os, ThoiGian a);
		ThoiGian& operator ++ ();
		ThoiGian operator ++ (int);
		ThoiGian& operator -- ();
		ThoiGian operator -- (int);
};