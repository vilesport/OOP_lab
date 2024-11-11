#include "Phanso.h"

/**
 * @brief Khoi tao phan so voi tu so va mau so mac dinh la 0.
 */
phanso::phanso()
{
	iTu = iMau = 0;
	return;
}

/**
 * @brief Khoi tao phan so voi tu so va mau so duoc truyen vao va rut gon.
 * @param a Tu so cua phan so.
 * @param b Mau so cua phan so.
 */
phanso::phanso(int a, int b)
{
	iTu = a;
	iMau = b;
	Rutgon();
}

/**
 * @brief Khoi tao phan so tu mot so thuc.
 * @param a So thuc de chuyen thanh phan so.
 * Phan so lay 2 chu so thap phan
 */
phanso::phanso(float a)
{
	iTu = (int)(a * 100);
	iMau = 100;
	Rutgon();
	return;
}

/**
 * @brief Rut gon phan so hien tai ve dang toi gian.
 */
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
	if (iMau < 0)
	{
		iTu *= -1;
		iMau *= -1;
	}
	return;
}

/**
 * @brief Cong hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return Phan so sau khi cong va rut gon.
 */
phanso operator + (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iMau + a.iMau * b.iTu, a.iMau * b.iMau);
	ret.Rutgon();
	return ret;
}

/**
 * @brief Tru hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return Phan so sau khi tru va rut gon.
 */
phanso operator - (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iMau - a.iMau * b.iTu, a.iMau * b.iMau);
	ret.Rutgon();
	return ret;
}

/**
 * @brief Nhan hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return Phan so sau khi nhan va rut gon.
 */
phanso operator * (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iTu, a.iMau * b.iMau);
	ret.Rutgon();
	return ret;
}

/**
 * @brief Chia hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return Phan so sau khi chia va rut gon.
 */
phanso operator / (phanso a, phanso b)
{
	phanso ret(a.iTu * b.iMau, a.iMau * b.iTu);
	ret.Rutgon();
	return ret;
}

/**
 * @brief So sanh bang hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return True neu bang nhau, nguoc lai false.
 */
bool operator == (phanso a, phanso b)
{
	return (a.iTu * b.iMau == a.iMau * b.iTu);
}

/**
 * @brief So sanh khac nhau hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return True neu khac nhau, nguoc lai false.
 */
bool operator != (phanso a, phanso b)
{
	return (a.iTu * b.iMau != a.iMau * b.iTu);
}

/**
 * @brief So sanh lon hon hoac bang hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return True neu a lon hon hoac bang b, nguoc lai false.
 */
bool operator >= (phanso a, phanso b)
{
	return (a.iTu * b.iMau >= a.iMau * b.iTu);
}

/**
 * @brief So sanh nho hon hoac bang hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return True neu a nho hon hoac bang b, nguoc lai false.
 */
bool operator <= (phanso a, phanso b)
{
	return (a.iTu * b.iMau <= a.iMau * b.iTu);
}

/**
 * @brief So sanh lon hon giua hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return True neu a lon hon b, nguoc lai false.
 */
bool operator > (phanso a, phanso b)
{
	return (a.iTu * b.iMau > a.iMau * b.iTu);
}

/**
 * @brief So sanh nho hon giua hai phan so.
 * @param a Phan so thu nhat.
 * @param b Phan so thu hai.
 * @return True neu a nho hon b, nguoc lai false.
 */
bool operator < (phanso a, phanso b)
{
	return (a.iTu * b.iMau < a.iMau * b.iTu);
}

/**
 * @brief Nhap doi tuong phanso tu luong dau vao.
 * @param is Luong dau vao (std::istream).
 * @param ps Doi tuong phanso de luu gia tri duoc nhap.
 */
istream& operator >> (istream& is, phanso& a)
{
	is >> a.iTu >> a.iMau;
	return is;
}

/**
 * @brief Xuat doi tuong phanso ra luong dau ra.
 * @param os Luong dau ra (std::ostream).
 * @param ps Doi tuong phanso can xuat.
 */
ostream& operator << (ostream& os, phanso a)
{
	os << a.iTu << "/" << a.iMau;
	return os;
}