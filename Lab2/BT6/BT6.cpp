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
    // Nhap thong tin cua tam giac
    a.Nhap();

    // Nhap goc quay (degree) va khoang cach tinh tien (v)
    cin >> degree >> v;

    // Tinh tien tam giac theo goc quay va khoang cach da nhap
    a.TinhTien(degree, v);

    // Xuat thong tin tam giac sau khi tinh tien
    a.Xuat();

    return 0;
}
