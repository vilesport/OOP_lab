#include "ThoiGian.h"

/**
 * @brief Khoi tao doi tuong ThoiGian voi gia tri mac dinh la 0 gio, 0 phut, 0 giay.
 */
ThoiGian::ThoiGian()
{
	iGio = iPhut = iGiay = 0;
	return;
}

/**
 * @brief Khoi tao doi tuong ThoiGian voi gia tri gio, phut, giay duoc truyen vao.
 * @param Gio So gio can khoi tao.
 * @param Phut So phut can khoi tao.
 * @param Giay So giay can khoi tao.
 */
ThoiGian::ThoiGian(int Gio, int Phut, int Giay)
{
	iGio = Gio;
	iPhut = Phut;
	iGiay = Giay;
	return;
}

/**
 * @brief Khoi tao doi tuong ThoiGian tu gia tri giay.
 * @param Giay So giay can khoi tao.
 */
ThoiGian::ThoiGian(int Giay)
{
	TinhLaiGio(Giay);
	return;
}

/**
 * @brief Tinh tong so giay tu doi tuong ThoiGian hien tai.
 * @return Tong so giay.
 */
int ThoiGian::TinhGiay()
{
	return iGio * 3600 + iPhut * 60 + iGiay;
}

/**
 * @brief Tinh va cap nhat gio, phut, giay cua doi tuong tu gia tri so giay.
 * @param Giay So giay can tinh lai.
 */
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

/**
 * @brief Cong hai doi tuong ThoiGian.
 * @param a Thoi gian thu nhat.
 * @param b Thoi gian thu hai.
 * @return Doi tuong ThoiGian sau khi cong.
 */
ThoiGian operator + (ThoiGian a, ThoiGian b)
{
	ThoiGian ret;
	ret.TinhLaiGio(a.TinhGiay() + b.TinhGiay());
	return ret;
}

/**
 * @brief Tru hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return Doi tuong ThoiGian sau khi tru.
 */
ThoiGian operator - (ThoiGian a, ThoiGian b)
{
	ThoiGian ret;
	ret.TinhLaiGio(a.TinhGiay() - b.TinhGiay());
	return ret;
}

/**
 * @brief So sanh bang hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return True neu bang nhau, nguoc lai false.
 */
bool operator == (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() == b.TinhGiay());
}

/**
 * @brief So sanh khac nhau hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return True neu khac nhau, nguoc lai false.
 */
bool operator != (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() != b.TinhGiay());
}

/**
 * @brief So sanh lon hon hoac bang hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return True neu a lon hon hoac bang b, nguoc lai false.
 */
bool operator >= (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() >= b.TinhGiay());
}

/**
 * @brief So sanh nho hon hoac bang hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return True neu a nho hon hoac bang b, nguoc lai false.
 */
bool operator <= (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() <= b.TinhGiay());
}

/**
 * @brief So sanh lon hon giua hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return True neu a lon hon b, nguoc lai false.
 */
bool operator > (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() > b.TinhGiay());
}

/**
 * @brief So sanh nho hon giua hai doi tuong ThoiGian.
 * @param a Doi tuong ThoiGian thu nhat.
 * @param b Doi tuong ThoiGian thu hai.
 * @return True neu a nho hon b, nguoc lai false.
 */
bool operator < (ThoiGian a, ThoiGian b)
{
	return (a.TinhGiay() < b.TinhGiay());
}

/**
 * @brief Nhap doi tuong ThoiGian tu luong dau vao.
 * @param is Luong dau vao (std::istream).
 * @param t Doi tuong ThoiGian de luu gia tri duoc nhap.
 */
istream& operator >> (istream& is, ThoiGian& a)
{
	is >> a.iGio >> a.iPhut >> a.iGiay;
	a.TinhLaiGio(a.TinhGiay());
	return is;
}

/**
 * @brief Xuat doi tuong ThoiGian ra luong dau ra.
 * @param os Luong dau ra (std::ostream).
 * @param t Doi tuong ThoiGian can xuat.
 */
ostream& operator << (ostream& os, ThoiGian a)
{
	os << a.iGio << ":" << a.iPhut << ":" << a.iGiay;
	return os;
}

/**
 * @brief Toan tu tien to ++ tang thoi gian len 1 giay.
 * @return Tham chieu den doi tuong ThoiGian sau khi tang.
 */
ThoiGian& ThoiGian::operator ++ ()
{
	*this = *this + 1;
	return *this;
}

/**
 * @brief Toan tu hau to ++ tang thoi gian len 1 giay.
 * @return Doi tuong ThoiGian truoc khi tang.
 */
ThoiGian ThoiGian::operator ++ (int)
{
	ThoiGian ret = *this;
	++(*this);
	return ret;
}

/**
 * @brief Toan tu tien to -- giam thoi gian xuong 1 giay.
 * @return Tham chieu den doi tuong ThoiGian sau khi giam.
 */
ThoiGian& ThoiGian::operator -- ()
{
	*this = *this - 1;
	return *this;
}

/**
 * @brief Toan tu hau to -- giam thoi gian xuong 1 giay.
 * @return Doi tuong ThoiGian truoc khi giam.
 */
ThoiGian ThoiGian::operator -- (int)
{
	ThoiGian ret = *this;
	--(*this);
	return ret;
}