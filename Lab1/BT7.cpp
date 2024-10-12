#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
    * @brief sum_date[i][j] la tong so ngay cua cac thang truoc thang j
    * 
    * @param i = 0 la nam khong nhuan, i = 1 la nam nhuan.
    * @param j: Thang
    * @return Tong so ngay truoc thang j
*/
int sum_date[2][14] = {
                        {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
                        {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366} 
                      };
/**
    * @brief Cau truc luu thong tin cua chuyen bay
    * 
    * @param Macb: Ma chuyen bay
    * @param Ngaybay: Ngay bay
    * @param Giobay: Gio bay
    * @param Noidi: Noi di
    * @param Noiden: Noi den
    * @param date: Ma code ma hoa cho ngay thang nam
    * @param time: Ma code ma hoa cho gio phut
*/
struct Bay
{
    char Macb[10];
    char Ngaybay[15];
    char Giobay[10];
    char Noidi[25];
    char Noiden[25];
    long long date;
    long long time;
};

int n;
Bay def; //Thong tin chuyen bay mac dinh
vector<Bay> arr; //Mang luu thong tin cac chuyen bay

/**
 * @brief Ham so sanh de sap xep chuyen bay theo ngay va gio.
 *
 * @param a: Chuyen bay thu nhat.
 * @param b: Chuyen bay thu hai.
 * @return True neu chuyen bay `a` som hon chuyen bay `b`, nguoc lai false.
 */
bool cmp(Bay a, Bay b)
{
    long long d_a = a.date * 100000 + a.time; //Tinh toan gia tri ngay va thoi gian cua chuyen bay a
    long long d_b = b.date * 100000 + b.time; //Tinh toan gia tri ngay va thoi gian cua chuyen bay b
    return d_a < d_b; //So sanh de sap xep chuyen bay
}

/**
 * @brief Kiem tra xem nam co phai nam nhuan hay khong.
 *
 * @param y: Nam can kiem tra.
 * @return True neu la nam nhuan, nguoc lai false.
 */
bool namnhuan(long long y)
{
    if (y < 1000)
        return false; //Nam nho hon 1000 khong hop le
    if (y % 4 || !(y % 100 || !(y % 400)))
        return false; //Kiem tra dieu kien nam nhuan
    return true; //Neu khong vi pham dieu kien, la nam nhuan
}

/**
 * @brief Xac thuc chuoi ki tu dua tren mode cho truoc.
 *
 * @param str: Chuoi dau vao.
 * @param mode: Che do xac thuc (0 la chu va so, 1 la chu va so kem khoang trang).
 * @return True neu chuoi hop le, nguoc lai false.
 */
bool valid_str(char* str, int mode)
{
    while (*str)
    {
        char c = *str;
        //Kiem tra dieu kien hop le cua ky tu dua tren mode
        if ((c < '0' || c > 'z' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a')) && (mode && (c != ' ')))
            return false;
        str++;
    }
    return true;
}

/**
 * @brief Chuyen doi chuoi hai ki tu thanh so nguyen.
 *
 * @param a: Chuoi dau vao.
 * @return Gia tri so nguyen.
 */
int _to_2(char* a)
{
    return (a[0] - '0') * 10 + a[1] - '0'; //Chuyen doi chuoi hai ky tu thanh so nguyen
}

/**
 * @brief Chuyen doi chuoi bon ki tu thanh so nguyen.
 *
 * @param a: Chuoi dau vao.
 * @return Gia tri so nguyen.
 */
int _to_4(char* a)
{
    return (a[0] - '0') * 1000 + (a[1] - '0') * 100 + (a[2] - '0') * 10 + a[3] - '0'; //Chuyen doi chuoi bon ky tu thanh so nguyen
}

/**
 * @brief Chuyen doi chuoi ngay thanh dang so
 *
 * @param a: Chuoi ngay dau vao.
 * @return Gia tri so nguyen.
 */
long long date_to_num(char* date)
{
    long long ngay = _to_2(&date[0]);
    long long thang = _to_2(&date[3]);
    long long nam = _to_4(&date[6]);
    long long nhuan = namnhuan(nam);  //Kiem tra nam nhuan
    return nam * 1000 + sum_date[nhuan][thang] + ngay;
}

/**
 * @brief Xac thuc chuoi ngay theo dinh dang dd/mm/yyyy.
 *
 * @param a: Chuoi ngay dau vao.
 * @return True neu ngay hop le, nguoc lai false.
 */
bool valid_date(char* a)
{
    if (a[2] != '/' || a[5] != '/')
        return false; //Kiem tra dinh dang chuoi ngay
    for (int i = 0; i < 10; i++)
        if ((a[i] < '0' || a[i] > '9') && i != 2 && i != 5)
            return false; //Kiem tra ky tu hop le

    long long ngay = _to_2(&a[0]);
    long long thang = _to_2(&a[3]);
    long long nam = _to_4(&a[6]);
    bool nhuan = namnhuan(nam);
    if (thang < 1 || thang > 12 || ngay < 1 || ngay > sum_date[nhuan][thang + 1] - sum_date[nhuan][thang])
        return false; //Kiem tra ngay hop le
    return true;
}

/**
 * @brief Xac thuc chuoi thoi gian theo dinh dang hh:mm.
 *
 * @param a: Chuoi thoi gian dau vao.
 * @return True neu thoi gian hop le, nguoc lai false.
 */
bool valid_time(char* a)
{
    if (a[2] != ':')
        return false; //Kiem tra dinh dang chuoi thoi gian
    for (int i = 0; i < 5; i++)
        if ((a[i] < '0' || a[i] > '9') && a[i] != ':')
            return false; //Kiem tra ky tu hop le
    int gio = _to_2(&a[0]);
    int phut = _to_2(&a[3]);
    return (gio >= 0 && gio <= 23 && phut >= 0 && phut <= 59); //Kiem tra gio va phut hop le
}

/**
 * @brief Nhap thong tin chuyen bay tu nguoi dung.
 *
 * @param a: Chuyen bay luu tru du lieu dau vao (tham chieu).
 */
void Nhap(Bay& a)
{
    string buf;
    //Nhap ma chuyen bay va kiem tra hop le
    while (true)
    {
        printf("Ma chuyen bay(Toi da 5 ki tu): ");
        cin >> buf;
        if (buf.size() < 6 && valid_str(&buf[0], 0))
        {
            strcpy_s(a.Macb, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap ngay bay va kiem tra hop le
    while (true)
    {
        printf("Ngay bay (dd/mm/yyyy): ");
        cin >> buf;
        if (buf.size() == 10 && valid_date(&buf[0]))
        {
            strcpy_s(a.Ngaybay, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap gio bay va kiem tra hop le
    while (true)
    {
        printf("Gio bay (hh:mm): ");
        cin >> buf;
        if (buf.size() == 5 && valid_time(&buf[0]))
        {
            strcpy_s(a.Giobay, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap noi di va kiem tra hop le
    while (true)
    {
        printf("Noi di: ");
        cin.ignore();
        getline(cin, buf);
        if (buf.size() < 21 && valid_str(&buf[0], 1))
        {
            strcpy_s(a.Noidi, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap noi den va kiem tra hop le
    while (true)
    {
        printf("Noi den: ");
        getline(cin, buf);
        if (buf.size() < 21 && valid_str(&buf[0], 1))
        {
            strcpy_s(a.Noiden, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    
    long long gio = _to_2(&a.Giobay[0]);
    long long phut = _to_2(&a.Giobay[3]);

    //Tinh toan dang so cua ngay va thoi gian khoi hanh cua chuyen bay
    a.date = date_to_num(a.Ngaybay);
    a.time = gio * 24 + phut;
    return;
}

/**
 * @brief Hien thi chi tiet chuyen bay.
 *
 * @param a: Chuyen bay chua du lieu chuyen bay.
 */
void Xuat(Bay a)
{
    //In thong tin chi tiet cua chuyen bay
    puts("=========================================================================");
    printf("Ma chuyen bay: %s\nNgay bay: %s\n", a.Macb, a.Ngaybay);
    printf("Gio bay: %s\nNoi di: %s\nNoi den: %s\n", a.Giobay, a.Noidi, a.Noiden);
    puts("=========================================================================");
    return;
}

/**
 * @brief Hien thi menu cac lua chon cho nguoi dung.
 */
void menu()
{
    //Hien thi menu cac lua chon
    puts("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    puts("Ban muon lam gi?");
    puts("1. In thong tin cac chuyen bay.");
    puts("2. Kiem tra thong tin chuyen bay.");
    puts("3. Sap xep cac chuyen bay theo thoi gian khoi hanh.");
    puts("4. Liet ke cac chuyen bay dua theo dia diem va thoi gian khoi hanh.");
    puts("5. Dem so chuyen bay dua theo noi di va noi den.");
    puts("6. Thoat.");
    printf(">> ");
    return;
}

/**
 * @brief In chi tiet thong tin tat ca cac chuyen bay trong danh sach.
 */
void Indanhsach()
{
    puts("Thong tin cac chuyen bay:");
    for (int i = 0; i < arr.size(); i++)
        Xuat(arr[i]);
}

/**
 * @brief Tim kiem chuyen bay theo ma va hien thi chi tiet neu tim thay.
 */
void Timtheoma()
{
    string buf;
    //Nhap ma chuyen bay can tim va kiem tra hop le
    printf("Nhap ma chuyen bay can tim(toi da 5 ki tu): ");
    cin >> buf;
    if (buf.size() > 5 || !valid_str(&buf[0], 0))
    {
        puts("Khong hop le.");
        return;
    }
    bool found = false;
    //Tim chuyen bay theo ma va hien thi chi tiet
    for (int i = 0; i < arr.size(); i++)
    {
        if (!strcmp(&buf[0], arr[i].Macb))
        {
            Xuat(arr[i]);
            found = 1;
        }
    }
    if (!found)
        printf("Khong co chuyen bay ma %s\n", &buf[0]);
    return;
}

/**
 * @brief Sap xep cac chuyen bay trong danh sach theo ngay va gio.
 */
void Sapxep()
{
    //Sap xep chuyen bay theo ngay va thoi gian khoi hanh
    sort(arr.begin(), arr.end(), cmp);
    puts("Cac chuyen bay sau khi sap xep:");
    for(int i = 0; i < arr.size(); i++)
        Xuat(arr[i]);
    return;
}

/**
 * @brief Liet ke cac chuyen bay theo ngay va dia diem khoi hanh.
 */
void Timtheonoidingaydi()
{
    string buf1, buf2;
    //Nhap thong tin ngay bay va noi di
    printf("Nhap thong tin can tim\n");
    printf("Ngay bay (dd/mm/yyyy): ");
    cin >> buf1;
    if (buf1.size() != 10 && !valid_date(&buf1[0]))
    {
        puts("Khong hop le.");
        return;
    }

    printf("Noi di: ");
    cin.ignore();
    getline(cin, buf2);
    if (buf2.size() > 20 && !valid_str(&buf2[0], 1))
    {
        puts("Khong hop le.");
        return;
    }

    bool found = false;
    //Tim kiem chuyen bay theo ngay va noi di va hien thi chi tiet
    for (int i = 0; i < arr.size(); i++)
    {
        if (strcmp(&buf1[0], arr[i].Ngaybay) || strcmp(&buf2[0], arr[i].Noidi))
            continue;
        found = true;
        Xuat(arr[i]);
    }
    if (!found)
        printf("Khong tim thay chuyen bay khoi hanh tu %s vao ngay %s\n", &buf2[0], &buf1[0]);
    return;
}

/**
 * @brief Dem so luong chuyen bay giua mot dia diem di va dia diem den cu the.
 */
void Dem()
{
    string buf1, buf2;
    int _count = 0;
    //Nhap noi di va noi den
    printf("Nhap thong tin can tim\n");
    printf("Noi di: ");
    cin.ignore();
    getline(cin, buf1);
    if (buf1.size() > 20 && !valid_str(&buf1[0], 1))
    {
        puts("Khong hop le.");
        return;
    }
    printf("Noi den: ");
    cin.ignore();
    getline(cin, buf2);
    if (buf2.size() > 20 && !valid_str(&buf2[0], 1))
    {
        puts("Khong hop le.");
        return;
    }

    bool found = false;
    //Dem so luong chuyen bay giua noi di va noi den
    for (int i = 0; i < arr.size(); i++)
    {
        if (strcmp(&buf1[0], arr[i].Noidi))
            continue;
        if (strcmp(&buf2[0], arr[i].Noiden))
            continue;
        found = true;
        _count++;
    }

    printf("Co %d chuyen bay xuat phat tu %s den %s\n", _count, &buf1[0], &buf2[0]);
}

int main()
{
    //Nhap so luong chuyen bay tu nguoi dung
    printf("Nhap so luong chuyen bay: ");
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(def);
        puts("--------------------------------------------------------------------------");
        printf("Thong tin chuyen bay thu %d:\n", i + 1);
        Nhap(arr[i]);
    }

    int choice;
    while (true)  //Hien thi menu va thuc hien lua chon cua nguoi dung
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            Indanhsach();
            break;
        case 2:
            Timtheoma();
            break;
        case 3:
            Sapxep();
            break;
        case 4:
            Timtheonoidingaydi();
            break;
        case 5:
            Dem();
            break;
        default:
            exit(0);
        }
    }
}
