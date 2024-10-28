#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Struct de luu tru mot phan so
 */
struct PhanSo {
    int tuSo;
    int mauSo;
};

/**
 * @brief Nhap vao mot phan so va kiem tra mau so phai khac 0
 * @param phanSo Phan so can nhap
 */
void nhapPhanSo(PhanSo &phanSo) {
    cout << "Nhap tu so: ";
    cin >> phanSo.tuSo;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> phanSo.mauSo;
        if (phanSo.mauSo == 0) {
            cout << "Mau so khong the bang 0. Vui long nhap lai.\n";
        }
    } while (phanSo.mauSo == 0);
}

/**
 * @brief So sanh hai phan so
 * @param ps1 Phan so dau tien
 * @param ps2 Phan so thu hai
 * @return True neu ps1 < ps2, nguoc lai false
 */
bool soSanhPhanSo(const PhanSo &ps1, const PhanSo &ps2) {
    // So sanh hai phan so dua tren gia tri tu so cua chung sau khi quy dong mau so
    return (ps1.tuSo * ps2.mauSo < ps2.tuSo * ps1.mauSo);
}

/**
 * @brief Tim phan so nho nhat trong mot vector cac phan so
 * @param ds Danh sach cac phan so
 * @return Phan so nho nhat
 */
PhanSo timMin(const vector<PhanSo> &ds) {
    PhanSo Min = ds[0];
    for (const auto &phanSo : ds) {
        if (soSanhPhanSo(phanSo, Min)) {
            Min = phanSo;
        }
    }
    return Min;
}

/**
 * @brief Tim phan so lon nhat trong mot vector cac phan so
 * @param ds Danh sach cac phan so
 * @return Phan so lon nhat
 */
PhanSo timMax(const vector<PhanSo> &ds) {
    PhanSo Max = ds[0];
    for (const auto &phanSo : ds) {
        if (soSanhPhanSo(Max, phanSo)) {
            Max = phanSo;
        }
    }
    return Max;
}

int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;

    vector<PhanSo> ds(n);
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan so thu " << i + 1 << ":\n";
        nhapPhanSo(ds[i]);
    }

    PhanSo Min = timMin(ds);
    PhanSo Max = timMax(ds);

    cout << Min.tuSo << "/" << Min.mauSo << " ";
    cout << Max.tuSo << "/" << Max.mauSo << "\n";

    return 0;
}
