#include "Phanso.h"

phanso::phanso()
{
	iTu = iMau = 0;
	return;
}

phanso::phanso(int a, int b)
{
	iTu = a;
	iMau = b;
	Rutgon();
}

phanso::phanso(float a)
{
	iTu = (int)(a * 100);
	iMau = 100;
	Rutgon();
	return;
}

void phanso::Rutgon()
{
	int a = abs(iTu);
	int b = abs(iMau);
	int tmp;
	while (b)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	int gcd = a;
	iTu /= gcd;
	iMau /= gcd;
	return;
}

phanso operator + (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iMau + a.iMau * b.iTu, a.iMau * b.iMau);
	ret.Rutgon();
	return ret;
}

phanso operator - (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iMau - a.iMau * b.iTu, a.iMau * b.iMau);
	ret.Rutgon();
	return ret;
}

phanso operator * (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iTu, a.iMau * b.iMau);
	ret.Rutgon();
	return ret;
}

phanso operator / (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iMau, a.iMau * b.iTu);
	ret.Rutgon();
	return ret;
}

bool operator == (phanso a, phanso b)
{
	return (a.iTu * b.iMau == a.iMau * b.iTu);
}

bool operator != (phanso a, phanso b)
{
	return (a.iTu * b.iMau != a.iMau * b.iTu);
}

bool operator >= (phanso a, phanso b)
{
	return (a.iTu * b.iMau >= a.iMau * b.iTu);
}

bool operator <= (phanso a, phanso b)
{
	return (a.iTu * b.iMau <= a.iMau * b.iTu);
}

bool operator > (phanso a, phanso b)
{
	return (a.iTu * b.iMau > a.iMau * b.iTu);
}

bool operator < (phanso a, phanso b)
{
	return (a.iTu * b.iMau < a.iMau * b.iTu);
}

istream& operator >> (istream& is, phanso& a)
{
	is >> a.iTu >> a.iMau;
	return is;
}

ostream& operator << (ostream& os, phanso a)
{
	os << a.iTu << "/" << a.iMau;
	return os;
}