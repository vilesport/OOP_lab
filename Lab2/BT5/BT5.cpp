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
    cin >> x >> k;
    Diem a(x, k);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            a.SetTungDo(a.GetTungDo() * 2);
            a.SetHoanhDo(a.GetHoanhDo() * 2);
            break;

        case 2:
            a.SetTungDo(0);
            a.SetHoanhDo(0);
            break;

        case 3:
            cin >> k >> d;
            if (k)
                a.TinhTien(0, d);
            else
                a.TinhTien(d, 0);
            break;

        default:
            break;
        }
    }

    a.Xuat();
    return 0;
}
