#include "Diem.h"

int n, x, k;
float d;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien cac thao tac voi doi tuong Diem dua tren lua chon cua nguoi dung.
 *
 * Chuong trinh nhap vao cac gia tri va thuc hien cac thao tac nhu nhan doi toa do, dat toa do ve 0,
 * hoac tinh tien diem theo chi so do nguoi dung chon.
 */
int main()
{
    // Nhap toa do hoanh va tung cho doi tuong a
    cin >> x >> k;
    Diem a(x, k);

    // Nhap so luong thao tac
    cin >> n;

    // Thuc hien n lan thao tac voi diem a
    for (int i = 0; i < n; i++)
    {
        cin >> x; // Nhap ma thao tac
        switch (x)
        {
        case 1:
            // Thao tac 1: Nhan doi tung do va hoanh do
            a.SetTungDo(a.GetTungDo() * 2);
            a.SetHoanhDo(a.GetHoanhDo() * 2);
            break;

        case 2:
            // Thao tac 2: Dat tung do va hoanh do ve 0
            a.SetTungDo(0);
            a.SetHoanhDo(0);
            break;

        case 3:
            // Thao tac 3: Tinh tien diem theo tung hoac hoanh
            cin >> k >> d;
            if (k)
                a.TinhTien(0, d); // Tinh tien theo tung
            else
                a.TinhTien(d, 0); // Tinh tien theo hoanh
            break;

        default:
            // Khong thuc hien thao tac nao neu ma thao tac khong hop le
            break;
        }
    }

    // Xuat toa do cuoi cung cua diem a
    a.Xuat();
    return 0;
}
