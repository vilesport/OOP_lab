#include <iostream>
using namespace std;

/*
    * @brief sum_date[i][j] la tong so ngay cua cac thang truoc thang j.
    * @param i = 0 la nam khong nhuan, i = 1 la nam nhuan.
    * @param j: Thang.
    * @return Tong so ngay truoc thang j.
*/
int sum_date[2][14] = {
    {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
    {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366} };

//Code la ngay hien tai trong nam. Su dung de tinh toan ra ngay thang thay vi if else tung thang
int code, ngay, thang, nam;
bool nhuan;

/**
 * @brief Kiem tra nam nhuan.
 *
 * Ham nay kiem tra xem nam co phai la nam nhuan hay khong.
 *
 * @param y: Nam can kiem tra.
 * @return true Neu nam la nam nhuan.
 * @return false Neu nam khong phai la nam nhuan.
 */
bool namnhuan(int y)
{
    if (y < 1000) return false; //Nam phai lon hon hoac bang 1000
    if (y % 4 || !(y % 100 || !(y % 400))) return false; //Kiem tra quy tac nam nhuan
    return true;
}

/**
 * @brief Tinh lai ngay thang sau khi cap nhat code.
 *
 */
void tinh()
{
    if (code > sum_date[nhuan][13]) //Truong hop code > so ngay cua 1 nam, tinh toan sang nam moi.
    {
        code = 1; //Dat lai code la 1
        ngay = thang = 1; //Dat lai ngay va thang la 1
        nam++; //Tang nam len 1
        nhuan = namnhuan(nam); //Cap nhat trang thai nam nhuan
        return;
    }
    if (code == 0) //Truong hop code == 0, tinh toan lui ve 1 nam.
    {
        nam--; //Giam nam xuong 1
        ngay = 31; //Dat ngay la 31
        thang = 12; //Dat thang la 12
        nhuan = namnhuan(nam); //Cap nhat trang thai nam nhuan
        code = sum_date[nhuan][13]; //Dat lai code cho so ngay cua nam
        return;
    }
    for (int i = 1; i < 13; i++) //Tim thang phu hop voi ma code.
    {
        if (sum_date[nhuan][i] > code)
            break;
        thang = i; //Cap nhat thang
    }
    ngay = code - sum_date[nhuan][thang]; //Tinh ngay tu code
    if (!ngay) //Neu ngay = 0, lui ve 1 thang.
    {
        thang--; //Giam thang xuong 1
        ngay = sum_date[nhuan][thang + 1] - sum_date[nhuan][thang]; //Cap nhat ngay
    }
    return;
}

/**
 * @brief Gan gia tri ngay, thang, nam va cap nhat code.
 *
 * @param a: Ngay.
 * @param b: Thang.
 * @param c: Nam.
 */
void nhap(int a, int b, int c)
{
    ngay = a;
    thang = b;
    nam = c;
    nhuan = namnhuan(nam); //Cap nhat trang thai nam nhuan
    code = sum_date[nhuan][b] + a; //Tinh toan code tuong ung
    return;
}

/**
 * @brief In ra ngay thang nam hien tai.
 *
 */
void xuat()
{
    tinh();
    printf("Ngay %d thang %d nam %d\n", ngay, thang, nam);
    return;
}

int main()
{
    puts("Nhap ngay thang nam:");
    while (true) //Nhap ngay thang nam
    {
        printf("Ngay: ");
        cin >> ngay;
        printf("Thang: ");
        cin >> thang;
        printf("Nam: ");
        cin >> nam;
        nhuan = namnhuan(nam);
        if (thang < 1 || thang > 12 || ngay < 1 || ngay > sum_date[nhuan][thang + 1] - sum_date[nhuan][thang] || nam < 1)
        {
            puts("Khong hop le"); //Thong bao neu ngay thang nam khong hop le
            continue;
        }
        break;
    }
    code = sum_date[nhuan][thang] + ngay;
    
    //Tinh toan ngay tiep theo
    code++;
    tinh();
    puts("Ngay tiep theo la:");
    xuat(); 

    //Tinh toan ngay truoc
    code--;
    tinh(); 
    code--;
    tinh();
    puts("Ngay truoc la:");
    xuat();
    printf("Ngay nay la ngay thu %d trong nam", code + 1);
}
