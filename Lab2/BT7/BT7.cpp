#include "Polygon.h"

Poly A;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien cac thao tac nhap, sap xep va tinh dien tich cua da giac.
 */
int main() {
    A.Nhap();
    A.Sapxep();
    cout << A.Tinhdientich();
    return 0;
}
