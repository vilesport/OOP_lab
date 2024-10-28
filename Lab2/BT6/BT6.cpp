#include "Tamgiac.h"

TamGiac a;
float degree, v;

int main()
{
    a.Nhap();
    cin >> degree >> v;
    a.TinhTien(degree, v);
    a.Xuat();

    return 0;
}
