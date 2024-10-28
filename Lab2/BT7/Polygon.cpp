#include "Polygon.h"

/**
 * @brief Nhap thong tin cac diem cua da giac tu nguoi dung.
 */
void Poly::Nhap()
{
    Diem tmp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp.x >> tmp.y;
        arr.push_back(tmp);
    }
}

/**
 * @brief Tinh trong tam cua da giac dua tren toa do cac diem.
 * Bang cach tinh trung binh cua x va y cua tat ca tat diem cua da giac
 */
void Poly::Timtrongtam()
{
    for (const auto& p : arr)
    {
        centroid.x += p.x;
        centroid.y += p.y;
    }
    centroid.x /= arr.size();
    centroid.y /= arr.size();
}

/**
 * @brief Tinh goc giua mot diem a voi trong tam cua da giac.
 * @param a Diem can tinh goc.
 * @return Goc cua diem a voi trong tam (don vi radian) so voi truc x.
 */
float Poly::Goc(Diem a)
{
    return atan2(a.y - centroid.y, a.x - centroid.x);
}

/**
 * @brief Sap xep cac diem cua da giac theo goc cua tung diem voi trong tam so voi truc x.
 */
void Poly::Sapxep()
{
    Timtrongtam();
    std::sort(arr.begin(), arr.end(), [&](Diem& p1, Diem& p2) { return Goc(p1) < Goc(p2); });
}

/**
 * @brief Tinh dien tich cua da giac su dung cong thuc Gauss (hoac Shoelace).
 * @return Dien tich cua da giac.
 * Tinh dien tich cua da giac theo cong thuc Gauss.
 */
float Poly::Tinhdientich()
{
    int n = (int)arr.size();
    float area = 0.0;

    for (int i = 0; i < n; ++i)
    {
        int j = (i + 1) % n;
        area += (arr[i].x * arr[j].y) - (arr[j].x * arr[i].y);
    }

    return (float)fabs(area) / (float)2.0;
}
