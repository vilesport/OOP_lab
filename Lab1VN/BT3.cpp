#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * @brief Struct de luu tru mot phan so
 */
struct PhanSo {
    int tuSo;
    int mauSo;
};

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
 * @brief Tim uoc chung lon nhat cua hai so
 * @param a So thu nhat
 * @param b So thu hai
 * @return Uoc chung lon nhat
 */
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/**
 * @brief Rut gon mot phan so
 * @param phanSo Phan so can rut gon
 */
void rutGonPhanSo(PhanSo &phanSo) {
    int ucln = gcd(abs(phanSo.tuSo), abs(phanSo.mauSo));
    phanSo.tuSo /= ucln;
    phanSo.mauSo /= ucln;
}

/**
 * @brief Nhan hai phan so
 * @param ps1 Phan so thu nhat
 * @param ps2 Phan so thu hai
 * @return Phan so ket qua sau khi nhan
 */
PhanSo nhanPhanSo(const PhanSo &ps1, const PhanSo &ps2) {
    PhanSo ketQua;
    ketQua.tuSo = ps1.tuSo * ps2.tuSo;
    ketQua.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(ketQua);
    return ketQua;
}

/**
 * @brief Tim tap hop con co tich bang phan so dich
 * @param ds Danh sach cac phan so
 * @param dich Phan so dich
 * @return Tap hop con co so luong nho nhat neu co, nguoc lai tra ve vector rong
 */
vector<PhanSo> timTapHopCon(const vector<PhanSo> &ds, const PhanSo &dich) {
    int n = ds.size();
    vector<PhanSo> Min;
    for (int i = 1; i < (1 << n); ++i) {
        PhanSo tich = {1, 1};
        vector<PhanSo> tapHopCon;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                tich = nhanPhanSo(tich, ds[j]);
                tapHopCon.push_back(ds[j]);
            }
        }
        rutGonPhanSo(tich);
        if (tich.tuSo == dich.tuSo && tich.mauSo == dich.mauSo) {
            if (Min.empty() || tapHopCon.size() < Min.size()) {
                Min = tapHopCon;
            }
        }
    }
    return Min;
}

int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;

    vector<PhanSo> ds(n);
    for (int i = 0; i < n; ++i)
        nhapPhanSo(ds[i]);

    PhanSo dich;
    nhapPhanSo(dich);

    vector<PhanSo> ketQua = timTapHopCon(ds, dich);
    if (!ketQua.empty()) {
        sort(ketQua.begin(), ketQua.end(), soSanhPhanSo);
        for (const auto &phanSo : ketQua) {
            cout << phanSo.tuSo << "/" << phanSo.mauSo << " ";
        }
        cout << "\n";
    }

    return 0;
}
