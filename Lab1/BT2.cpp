#include <iostream>
#include <algorithm>
using namespace std;

struct phanso
{
    long long tuso, mauso;
};

/**
 * @brief Tinh uoc chung lon nhat (UCLN) cua tu so va mau so cua phan so.
 *
 * @param x: Phan so can tinh UCLN.
 * @return long long UCLN cua tu so va mau so.
 */
long long Gcd(phanso x)
{
    long long a = x.tuso, b = x.mauso, tmp;
    while (b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

/**
 * @brief Xuat ra phan so hien tai.
 *
 * @param x: Phan so can xuat.
 */
void xuat(phanso x)
{
    if (x.tuso == 0)
        printf("0\n");
    else if (x.mauso == 1)
        printf("%lld\n", x.tuso);
    else
        printf("%lld/%lld\n", x.tuso, x.mauso);
    return;
}

/**
 * @brief Rut gon phan so bang cach chia tu so va mau so cho UCLN cua chung.
 *
 * @param x: Phan so can rut gon (tham chieu).
 */
void rutgon(phanso& x)
{
    long long GCD = Gcd(x); //Tinh UCLN cua tu so va mau so
    x.tuso /= GCD; //Chia tu so cho UCLN
    x.mauso /= GCD; //Chia mau so cho UCLN
    if (x.mauso < 0) //Neu mau so am, doi dau ca tu so va mau so
    {
        x.tuso *= -1;
        x.mauso *= -1;
    }
    return;
}

/**
 * @brief Gan gia tri cho phan so tuong ung voi tu so va mau so cho truoc, sau do rut gon.
 *
 * @param x: Phan so can gan gia tri (tham chieu).
 * @param a: Tu so cua phan so.
 * @param b: Mau so cua phan so.
 */
void nhap(phanso& x, int a, int b)
{
    x.tuso = a; //Gan tu so
    x.mauso = b; //Gan mau so
    rutgon(x); //Rut gon phan so sau khi gan gia tri
    return;
}

/**
 * @brief Tinh gia tri thuc cua phan so.
 *
 * @param x: Phan so can tinh gia tri
 * @return Gia tri thuc cua phan so.
 */
double num(phanso x)
{
    return 1.0 * x.tuso / x.mauso;
}

/**
 * @brief Nhap phan so tuong ung voi tu so va mau so. Neu mau so bang 0 thi nhap lai.
 *
 * @param ps: Phan so can nhap (tham chieu).
 */
void Nhap(phanso& ps)
{
    int a = 0, b = 0;
    while (b == 0) //Nhap phan so cho den khi mau so khac 0
    {
        printf("Tu so: ");
        cin >> a; //Nhap tu so
        printf("Mau so: ");
        cin >> b; //Nhap mau so, mau so phai khac 0
        if (!b) //Neu mau so bang 0, thong bao loi
        {
            puts("Phan so khong hop le");
            continue;
        }
        nhap(ps, a, b); //Gan gia tri va rut gon phan so neu hop le
    }
}

phanso ps1, ps2;

int main()
{
    //Nhap 2 phan so
    puts("Nhap vao phan so thu nhat:");
    Nhap(ps1);
    puts("Nhap vao phan so thu hai:");
    Nhap(ps2);

    //So sanh hai phan so
    if (num(ps1) > num(ps2))
        xuat(ps1);
    else if (num(ps1) < num(ps2))
        xuat(ps2);
    else
        puts("Hai phan so bang nhau");
}
