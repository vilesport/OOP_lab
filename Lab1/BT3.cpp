#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

struct phanso
{
	long long tuso, mauso;
};

/**
 * @brief Tinh uoc chung lon nhat (UCLN) cua tu so va mau so cua phan so.
 *
 * @param x: Phan so can tinh UCLN.
 * @return long long UCLN cua tu so va mau so.
 */
long long Gcd(phanso x)
{
	long long a = x.tuso, b = x.mauso, tmp;
	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

/**
 * @brief Xuat ra phan so hien tai.
 *
 * @param x: Phan so can xuat.
 */
void xuat(phanso x)
{
	if (x.tuso == 0)
		printf("0\n");
	else if (x.mauso == 1)
		printf("%lld\n", x.tuso);
	else
		printf("%lld/%lld\n", x.tuso, x.mauso);
	return;
}

/**
 * @brief Rut gon phan so bang cach chia tu so va mau so cho UCLN cua chung.
 *
 * @param x: Phan so can rut gon (tham chieu).
 */
void rutgon(phanso& x)
{
	long long GCD = Gcd(x); //Tinh UCLN cua tu so va mau so
	x.tuso /= GCD; //Chia tu so cho UCLN
	x.mauso /= GCD; //Chia mau so cho UCLN
	if (x.mauso < 0) //Neu mau so am, doi dau ca tu so va mau so
	{
		x.tuso *= -1;
		x.mauso *= -1;
	}
	return;
}

/**
 * @brief Gan gia tri cho phan so tuong ung voi tu so va mau so cho truoc, sau do rut gon.
 *
 * @param x: Phan so can gan gia tri (tham chieu).
 * @param a: Tu so cua phan so.
 * @param b: Mau so cua phan so.
 */
void nhap(phanso& x, int a, int b)
{
	x.tuso = a; //Gan tu so
	x.mauso = b; //Gan mau so
	rutgon(x); //Rut gon phan so sau khi gan gia tri
	return;
}

/**
 * @brief Cong hai phan so va tra ve ket qua.
 *
 * @param a: Phan so thu nhat.
 * @param b: Phan so thu hai.
 * @return phanso Ket qua phep cong.
 */
phanso cong(phanso a, phanso b)
{
	a.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
	a.mauso = a.mauso * b.mauso;
	rutgon(a); //Rut gon ket qua
	return a;
}

/**
 * @brief Tru hai phan so va tra ve ket qua.
 *
 * @param a: Phan so thu nhat.
 * @param b: Phan so thu hai.
 * @return phanso Ket qua phep tru.
 */
phanso tru(phanso a, phanso b)
{
	a.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
	a.mauso = a.mauso * b.mauso;
	rutgon(a); //Rut gon ket qua
	return a;
}

/**
 * @brief Nhan hai phan so va tra ve ket qua.
 *
 * @param a: Phan so thu nhat.
 * @param b: Phan so thu hai.
 * @return phanso Ket qua phep nhan.
 */
phanso nhan(phanso a, phanso b)
{
	a.tuso = a.tuso * b.tuso;
	a.mauso = a.mauso * b.mauso;
	rutgon(a); //Rut gon ket qua
	return a;
}

/**
 * @brief Chia hai phan so va tra ve ket qua.
 *
 * @param a: Phan so thu nhat.
 * @param b: Phan so thu hai.
 * @return phanso Ket qua phep chia.
 */
phanso chia(phanso a, phanso b)
{
	a.tuso = a.tuso * b.mauso;
	a.mauso = a.mauso * b.tuso;
	rutgon(a); //Rut gon ket qua
	return a;
}

//Khai bao 2 phan so
phanso ps1, ps2;

/**
 * @brief Nhap gia tri cho phan so, dam bao mau so khac 0.
 *
 * @param ps: Phan so can nhap (tham chieu).
 */
void Nhap(phanso& ps)
{
	int a = 0, b = 0;
	while (b == 0) //Nhap phan so cho den khi mau so khac 0
	{
		printf("Tu so: ");
		cin >> a; //Nhap tu so
		printf("Mau so: ");
		cin >> b; //Nhap mau so, mau so phai khac 0
		if (!b) //Neu mau so bang 0, thong bao loi
		{
			puts("Phan so khong hop le");
			continue;
		}
		nhap(ps, a, b); //Gan gia tri va rut gon phan so neu hop le
	}
}

int main()
{
	//Nhap 2 phan so
	puts("Nhap vao phan so thu nhat:");
	Nhap(ps1);
	puts("Nhap vao phan so thu hai:");
	Nhap(ps2);

	//Xuat ket qua cong, tru, nhan, chia
	printf("Tong hai phan so la: ");
	xuat(cong(ps1, ps2));
	printf("Hieu hai phan so la: ");
	xuat(tru(ps1, ps2));
	printf("Tich hai phan so la: ");
	xuat(nhan(ps1, ps2));
	printf("Thuong hai phan so la: ");
	xuat(chia(ps1, ps2));
}
