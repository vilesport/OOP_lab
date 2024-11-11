#include "SoPhuc.h"

/**
 * @brief Khoi tao so phuc voi phan thuc va phan ao mac dinh la 0.
 */
SoPhuc::SoPhuc()
{
	iThuc = iAo = 0;
	return;
}

/**
 * @brief Khoi tao so phuc voi phan thuc va phan ao duoc truyen vao.
 * @param thuc Phan thuc cua so phuc.
 * @param ao Phan ao cua so phuc.
 */
SoPhuc::SoPhuc(int thuc, int ao)
{
	iThuc = thuc;
	iAo = ao;
	return;
}

/**
 * @brief Khoi tao so phuc voi phan thuc duoc truyen vao, phan ao mac dinh la 0.
 * @param thuc Phan thuc cua so phuc.
 */
SoPhuc::SoPhuc(int thuc)
{
	iThuc = thuc;
	iAo = 0;
	return;
}

/**
 * @brief Cong hai so phuc.
 * @param a So phuc thu nhat.
 * @param b So phuc thu hai.
 * @return So phuc sau khi cong.
 */
SoPhuc operator + (SoPhuc a, SoPhuc b)
{
	SoPhuc ret(a.iThuc + b.iThuc, a.iAo + b.iAo);
	return ret;
}

/**
 * @brief Tru hai so phuc.
 * @param a So phuc thu nhat.
 * @param b So phuc thu hai.
 * @return So phuc sau khi tru.
 */
SoPhuc operator - (SoPhuc a, SoPhuc b)
{
	SoPhuc ret(a.iThuc - b.iThuc, a.iAo - b.iAo);
	return ret;
}

/**
 * @brief Nhan hai so phuc.
 * @param a So phuc thu nhat.
 * @param b So phuc thu hai.
 * @return So phuc sau khi nhan.
 */
SoPhuc operator * (SoPhuc a, SoPhuc b)
{
	SoPhuc ret(a.iThuc * b.iThuc - a.iAo * b.iAo, a.iThuc * b.iAo + b.iThuc * a.iAo);
	return ret;
}

/**
 * @brief Chia hai so phuc.
 * @param a So phuc thu nhat.
 * @param b So phuc thu hai.
 * @return So phuc sau khi chia.
 */
SoPhuc operator / (SoPhuc a, SoPhuc b)
{
	int mau = b.iThuc * b.iThuc + b.iAo * b.iAo;
	SoPhuc ret((a.iThuc * b.iThuc + a.iAo * b.iAo) / mau, (a.iThuc * b.iAo - b.iThuc * a.iAo) / mau);
	return ret;
}

/**
 * @brief So sanh bang hai so phuc.
 * @param a So phuc thu nhat.
 * @param b So phuc thu hai.
 * @return True neu bang nhau, nguoc lai false.
 */
bool operator == (SoPhuc a, SoPhuc b)
{
	return (a.iThuc == b.iThuc && a.iAo == b.iAo);
}

/**
 * @brief So sanh khac nhau hai so phuc.
 * @param a So phuc thu nhat.
 * @param b So phuc thu hai.
 * @return True neu khac nhau, nguoc lai false.
 */
bool operator != (SoPhuc a, SoPhuc b)
{
	return (a.iThuc != b.iThuc || a.iAo != b.iAo);
}

/**
 * @brief Nhap doi tuong SoPhuc tu luong dau vao.
 * @param is Luong dau vao (std::istream).
 * @param sp Doi tuong SoPhuc de luu gia tri duoc nhap.
 */
istream& operator >> (istream& is, SoPhuc& a)
{
	is >> a.iThuc >> a.iAo;
	return is;
}

/**
 * @brief Xuat doi tuong SoPhuc ra luong dau ra.
 * @param os Luong dau ra (std::ostream).
 * @param sp Doi tuong SoPhuc can xuat.
 */
ostream& operator << (ostream& os, SoPhuc a)
{
	os << a.iThuc << " + " << a.iAo << "i";
	return os;
}