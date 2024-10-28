#include "Diem.h"

int n, C;
float d, x, k;

int main()
{
    cin >> x >> k;
    Diem a(x, k);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> C;
        switch (C)
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
