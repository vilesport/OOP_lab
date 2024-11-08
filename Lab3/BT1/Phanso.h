#pragma once
#include <iostream>
using namespace std;

class phanso
{
	private:
		int iTu, iMau;
	public:
		phanso();
		phanso(int a, int b);
		phanso(float a);
		void Rutgon();
		friend phanso operator + (phanso a, phanso b);
		friend phanso operator - (phanso a, phanso b);
		friend phanso operator * (phanso a, phanso b);
		friend phanso operator / (phanso a, phanso b);
		friend bool operator == (phanso a, phanso b);
		friend bool operator != (phanso a, phanso b);
		friend bool operator >= (phanso a, phanso b);
		friend bool operator <= (phanso a, phanso b);
		friend bool operator > (phanso a, phanso b);
		friend bool operator < (phanso a, phanso b);
		friend istream& operator >> (istream& is, phanso& a);
		friend ostream& operator << (ostream& os, phanso a);
};