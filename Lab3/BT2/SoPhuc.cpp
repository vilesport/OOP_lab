#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	iThuc = iAo = 0;
	return;
}

SoPhuc::SoPhuc(int thuc, int ao)
{
	iThuc = thuc;
	iAo = ao;
	return;
}

SoPhuc::SoPhuc(int thuc)
{
	iThuc = thuc;
	iAo = 0;
	return;
}

SoPhuc operator + (SoPhuc a, SoPhuc b)
{
	SoPhuc ret(a.iThuc + b.iThuc, a.iAo + b.iAo);
	return ret;
}

SoPhuc operator - (SoPhuc a, SoPhuc b)
{
	SoPhuc ret(a.iThuc - b.iThuc, a.iAo - b.iAo);
	return ret;
}

SoPhuc operator * (SoPhuc a, SoPhuc b)
{
	SoPhuc ret(a.iThuc * b.iThuc - a.iAo * b.iAo, a.iThuc * b.iAo + b.iThuc * a.iAo);
	return ret;
}

SoPhuc operator / (SoPhuc a, SoPhuc b)
{
	int mau = b.iThuc * b.iThuc + b.iAo * b.iAo;
	SoPhuc ret((a.iThuc * b.iThuc + a.iAo * b.iAo) / mau, (a.iThuc * b.iAo - b.iThuc * a.iAo) / mau);
	return ret;
}

bool operator == (SoPhuc a, SoPhuc b)
{
	return (a.iThuc == b.iThuc && a.iAo == b.iAo);
}

bool operator != (SoPhuc a, SoPhuc b)
{
	return (a.iThuc != b.iThuc || a.iAo != b.iAo);
}

istream& operator >> (istream& is, SoPhuc& a)
{
	is >> a.iThuc >> a.iAo;
	return is;
}

ostream& operator << (ostream& os, SoPhuc a)
{
	os << a.iThuc << " + " << a.iAo << "i";
	return os;
}