#include <iostream>
#include <vector>
#include <algorithm> // Thu vien de su dung ham sort
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
    cin >> phanSo.tuSo >> phanSo.mauSo;
}

/**
 * @brief So sanh hai phan so
 * @param ps1 Phan so dau tien
 * @param ps2 Phan so thu hai
 * @return True neu ps1 < ps2, nguoc lai false
 */
bool soSanhPhanSo(PhanSo &ps1, PhanSo &ps2) {
    // So sanh hai phan so dua tren gia tri tu so cua chung sau khi quy dong mau so
    return (ps1.tuSo * ps2.mauSo < ps2.tuSo * ps1.mauSo);
}

/**
 * @brief Tim phan so lon thu k trong danh sach cac phan so
 * @param ds Danh sach cac phan so
 * @param k Vi tri thu k
 * @return Phan so lon thu k neu ton tai, nguoc lai tra ve phan so (-1, 1) de bieu thi khong co
 */
PhanSo timlonk(vector<PhanSo> ds, int k) {
    sort(ds.begin(), ds.end(), soSanhPhanSo);
    if (k <= 0 || k > ds.size()) return {-1, 1}; // Khong ton tai
    return ds[ds.size() - k];
}

/**
 * @brief Tim phan so nho thu k trong danh sach cac phan so
 * @param ds Danh sach cac phan so
 * @param k Vi tri thu k
 * @return Phan so nho thu k neu ton tai, nguoc lai tra ve phan so (-1, 1) de bieu thi khong co
 */
PhanSo timnhok(vector<PhanSo> &ds, int k) {
    if (k <= 0 || k > ds.size()) return {-1, 1}; // Khong ton tai
    return ds[k - 1];
}

int main() {
    int n, k;
    cin >> n, k;

    vector<PhanSo> ds(n);
    for (int i = 0; i < n; ++i) {
        nhapPhanSo(ds[i]);
    }

    // Sap xep danh sach phan so theo gia tri thuc cua no
    sort(ds.begin(), ds.end(), soSanhPhanSo);

    PhanSo lonk = timlonk(ds, k);
    PhanSo nhok = timnhok(ds, k);

    if (lonk.mauSo != -1) {
        cout << lonk.tuSo << "/" << lonk.mauSo << " ";
    }

    if (nhok.mauSo != -1) {
        cout << nhok.tuSo << "/" << nhok.mauSo << "\n";
    }

    return 0;
}
