#include "Polygon.h"

Poly A;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien cac thao tac nhap, sap xep cac dinh cua da giac va tinh dien tich.
 */
int main() {
    A.Nhap();
    A.Sapxep();
    cout << A.Tinhdientich();

    return 0;
}
