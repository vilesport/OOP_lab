#include "Tamgiac.h"

TamGiac a;
float degree, v;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien nhap, tinh tien va xuat thong tin tam giac.
 * 
 * Chuong trinh cho phep nguoi dung nhap thong tin cua tam giac, sau do thuc hien tinh tien tam giac 
 * theo goc quay va khoang cach da nhap, va cuoi cung xuat thong tin tam giac sau khi tinh tien.
 */
int main()
{
    a.Nhap();
    cin >> degree >> v;
    a.TinhTien(degree, v);
    a.Xuat();

    return 0;
}
