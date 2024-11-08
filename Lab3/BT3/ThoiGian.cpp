#include "ThoiGian.h"

ThoiGian::ThoiGian()
{
	iGio = iPhut = iGiay = 0;
	return;
}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay)
{
	iGio = Gio;
	iPhut = Phut;
	iGiay = Giay;
	return;
}

ThoiGian::ThoiGian(int Giay)
{
	TinhLaiGio(Giay);
	return;
}

int ThoiGian::TinhGiay()
{
	return iGio * 3600 + iPhut * 60 + iGiay;
}

void ThoiGian::TinhLaiGio(int Giay)
{
	Giay %= MAX;
	if (Giay < 0)
		Giay += MAX;
	int Gio = Giay / 3600;
	Giay %= 3600;
	int Phut = Giay / 60;
	Giay %= 60;
	iGio = Gio;
	iPhut = Phut;
	iGiay = Giay;
	return;
}

ThoiGian operator + (ThoiGian a, ThoiGian b)
{
	ThoiGian ret;
	ret.TinhLaiGio(a.TinhGiay() + b.TinhGiay());
	return ret;
}

ThoiGian operator - (ThoiGian a, ThoiGian b)
{
	ThoiGian ret;
	ret.TinhLaiGio(a.TinhGiay() - b.TinhGiay());
	return ret;
}

bool operator == (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() == b.TinhGiay());
}

bool operator != (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() != b.TinhGiay());
}

bool operator >= (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() >= b.TinhGiay());
}

bool operator <= (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() <= b.TinhGiay());
}

bool operator > (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() > b.TinhGiay());
}

bool operator < (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() < b.TinhGiay());
}

istream& operator >> (istream& is, ThoiGian& a)
{
	is >> a.iGio >> a.iPhut >> a.iGiay;
	a.TinhLaiGio(a.TinhGiay());
	return is;
}

ostream& operator << (ostream& os, ThoiGian a)
{
	os << a.iGio << ":" << a.iPhut << ":" << a.iGiay;
	return os;
}

ThoiGian& ThoiGian::operator ++ ()
{
	*this = *this + 1;
	return *this;
}

ThoiGian ThoiGian::operator ++ (int)
{
	ThoiGian ret = *this;
	++(*this);
	return ret;
}

ThoiGian& ThoiGian::operator -- ()
{
	*this = *this - 1;
	return *this;
}

ThoiGian ThoiGian::operator -- (int)
{
	ThoiGian ret = *this;
	--(*this);
	return ret;
}