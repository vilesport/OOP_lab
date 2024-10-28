#include "Polygon.h"

Poly A;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien cac thao tac nhap, sap xep cac dinh cua da giac va tinh dien tich.
 * 
 * Chuong trinh cho phep nguoi dung nhap thong tin ve cac dinh cua da giac, sau do sap xep cac dinh theo mot tieu chi
 * nhat dinh va tinh toan dien tich cua da giac do.
 */
int main() {
    A.Nhap();
    A.Sapxep();
    cout << A.Tinhdientich();

    return 0;
}
