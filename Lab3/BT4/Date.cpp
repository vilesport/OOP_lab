#include "Date.h"

/**
 * @brief Khoi tao doi tuong NgayThangNam voi gia tri mac dinh la 0 ngay, 0 thang, 0 nam.
 */
NgayThangNam::NgayThangNam()
{
	iNgay = iThang = iNam = 0;
	return;
}

/**
 * @brief Khoi tao doi tuong NgayThangNam tu nam, thang, ngay duoc truyen vao.
 * @param Nam Nam can khoi tao.
 * @param Thang Thang can khoi tao.
 * @param Ngay Ngay can khoi tao.
 */
NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay)
{
	iNgay = Ngay;
	iThang = Thang;
	iNam = Nam;
	return;
}

/**
 * @brief Khoi tao doi tuong NgayThangNam tu so ngay.
 * @param Ngay So ngay can khoi tao.
 */
NgayThangNam::NgayThangNam(int Ngay)
{
	iNgay = iThang = iNam = 0;
	int sum = abs(Ngay);
	int sumDay = 0;
	for (int i = 0; i < 10000; i++)
	{
		sumDay = 365 + Nhuan(i);
		if (sum <= sumDay)
		{
			iNam = i;
			break;
		}
		sum -= sumDay;
	}
	for (int i = 1; i <= 12; i++)
	{
		if (sum <= date[(sumDay == 366)][i + 1])
		{
			iThang = i;
			break;
		}
	}
	iNgay = sum - date[(sumDay == 366)][iThang];
	if (Ngay < 0)
		iNam = -iNam - 1;
}

/**
 * @brief Cong hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return Doi tuong NgayThangNam sau khi cong.
 */
NgayThangNam operator + (NgayThangNam a, NgayThangNam b)
{
	NgayThangNam ret(a.TinhNgay() + b.TinhNgay());
	return ret;
}

/**
 * @brief Tru hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return Doi tuong NgayThangNam sau khi tru.
 */
NgayThangNam operator - (NgayThangNam a, NgayThangNam b)
{
	NgayThangNam ret(a.TinhNgay() - b.TinhNgay());
	return ret;
}

/**
 * @brief So sanh bang hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return True neu bang nhau, nguoc lai false.
 */
bool operator == (NgayThangNam a, NgayThangNam b)
{
	return (a.TinhNgay() == b.TinhNgay());
}

/**
 * @brief So sanh khac nhau hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return True neu khac nhau, nguoc lai false.
 */
bool operator != (NgayThangNam a, NgayThangNam b)
{
	return (a.TinhNgay() != b.TinhNgay());
}

/**
 * @brief So sanh lon hon hoac bang hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return True neu a lon hon hoac bang b, nguoc lai false.
 */
bool operator >= (NgayThangNam a, NgayThangNam b)
{
	return (a.TinhNgay() >= b.TinhNgay());
}

/**
 * @brief So sanh nho hon hoac bang hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return True neu a nho hon hoac bang b, nguoc lai false.
 */
bool operator <= (NgayThangNam a, NgayThangNam b)
{
	return (a.TinhNgay() <= b.TinhNgay());
}

/**
 * @brief So sanh lon hon giua hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return True neu a lon hon b, nguoc lai false.
 */
bool operator > (NgayThangNam a, NgayThangNam b)
{
	return (a.TinhNgay() > b.TinhNgay());
}

/**
 * @brief So sanh nho hon giua hai doi tuong NgayThangNam.
 * @param a Doi tuong NgayThangNam thu nhat.
 * @param b Doi tuong NgayThangNam thu hai.
 * @return True neu a nho hon b, nguoc lai false.
 */
bool operator < (NgayThangNam a, NgayThangNam b)
{
	return (a.TinhNgay() < b.TinhNgay());
}

/**
 * @brief Toan tu tien to ++ tang ngay len 1 ngay.
 * @return Tham chieu den doi tuong NgayThangNam sau khi tang.
 */
NgayThangNam& NgayThangNam::operator ++ ()
{
	*this = *this + 1;
	return *this;
}

/**
 * @brief Toan tu hau to ++ tang ngay len 1 ngay.
 * @return Doi tuong NgayThangNam truoc khi tang.
 */
NgayThangNam NgayThangNam::operator ++ (int)
{
	NgayThangNam ret = *this;
	++(*this);
	return ret;
}

/**
 * @brief Toan tu tien to -- giam ngay xuong 1 ngay.
 * @return Tham chieu den doi tuong NgayThangNam sau khi giam.
 */
NgayThangNam& NgayThangNam::operator -- ()
{
	*this = *this - 1;
	return *this;
}

/**
 * @brief Toan tu hau to -- giam ngay xuong 1 ngay.
 * @return Doi tuong NgayThangNam truoc khi giam.
 */
NgayThangNam NgayThangNam::operator -- (int)
{
	NgayThangNam ret = *this;
	--(*this);
	return ret;
}

/**
 * @brief Nhap doi tuong NgayThangNam tu luong dau vao.
 * @param is Luong dau vao (std::istream).
 * @param nt Doi tuong NgayThangNam de luu gia tri duoc nhap.
 */
istream& operator >> (istream& is, NgayThangNam& a)
{
	is >> a.iNgay >> a.iThang >> a.iNam;
	return is;
}

/**
 * @brief Xuat doi tuong NgayThangNam ra luong dau ra.
 * @param os Luong dau ra (std::ostream).
 * @param nt Doi tuong NgayThangNam can xuat.
 */
ostream& operator << (ostream& os, NgayThangNam a)
{
	os << a.iNgay << "/" << a.iThang << "/" << a.iNam;
	return os;
}

/**
 * @brief Tinh tong so ngay tu nam hien tai.
 * @return Tong so ngay.
 */
int NgayThangNam::TinhNgay()
{
	int sumDay = 0;
	for (int i = 0; i < iNam; i++)
		sumDay += 365 + Nhuan(i);

	sumDay += date[Nhuan(iNam)][iThang] + iNgay;
	return sumDay;
}

/**
 * @brief Kiem tra xem nam co phai la nam nhuan hay khong.
 * @param nam Nam can kiem tra.
 * @return True neu la nam nhuan, false neu khong phai.
 */
bool NgayThangNam::Nhuan(int nam)
{
	return nam && (((nam % 4 == 0) && (nam % 100)) || (nam % 400 == 0));
}