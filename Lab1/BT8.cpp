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
    * @param Maso: Ma so tiet kiem
    * @param Loaitietkiem: Loai tiet kiem
    * @param Tenkh: Ho ten khach hang
    * @param CMND: Chung minh nhan dan
    * @param Ngaymoso: Ngay mo so
    * @param date: Ma code ma hoa cho ngay thang nam
    * @param Tiengui: Tien gui
*/
struct So
{
    char Maso[10];
    char Loaitietkiem[15];
    char Tenkh[35];
    char CMND[15];
    char Ngaymoso[15];
    long long date;
    double Tiengui;
};

int n;
So def; //Thong tin so tiet kiem mac dinh
vector<So> arr; //Mang luu thong tin cac so tiet kiem

/**
 * @brief Kiem tra xem nam co phai nam nhuan hay khong.
 *
 * @param y: Nam can kiem tra.
 * @return True neu la nam nhuan, nguoc lai false.
 */
bool namnhuan(long long y)
{
    if (y < 1000 || y % 4 || !(y % 100 || !(y % 400))) //Kiem tra dieu kien nam nhuan
        return false;
    return true; //Neu khong vi pham dieu kien, la nam nhuan
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
    long long day = _to_2(&date[0]);
    long long month = _to_2(&date[3]);
    long long year = _to_4(&date[6]);
    long long nhuan = namnhuan(year);  //Kiem tra nam nhuan
    return year * 1000 + sum_date[nhuan][month] + day;
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

    long long day = _to_2(&a[0]);
    long long month = _to_2(&a[3]);
    long long year = _to_4(&a[6]);
    bool nhuan = namnhuan(year);
    if (month < 1 || month > 12)
        return false; //Kiem tra thang hop le
    if (day < 1 || day > sum_date[nhuan][month + 1] - sum_date[nhuan][month])
        return false; //Kiem tra ngay hop le
    return true;
}

/**
 * @brief Xac thuc chuoi ki tu dua tren mode cho truoc.
 *
 * @param str: Chuoi dau vao.
 * @param mode: Che do xac thuc (0 la chu va so, 1 la chu va so kem khoang trang, 2 la chi so).
 * @return True neu chuoi hop le, nguoc lai false.
 */
bool valid_str(char* str, int mode)
{
    while (*str)
    {
        char c = *str;
        //Kiem tra dieu kien hop le cua ky tu dua tren mode
        if (((c < '0' || c > 'z' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a')) && (mode == 1 && (c != ' '))) || (mode == 2 && (c < '0' || c > '9')))
            return false;
        str++;
    }
    return true;
}

void Nhap(So& a)
{
    string buf;
    //Nhap ma so tiet kiem
    while (true)
    {
        printf("Ma so(Toi da 5 ki tu): ");
        cin >> buf;
        if (buf.size() < 6 && valid_str(&buf[0], 0))
        {
            strcpy_s(a.Maso, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap loai tiet kiem
    while (true)
    {
        printf("Loai tiet kiem (nganhan/daihan/khongkyhan): ");
        cin >> buf;
        if (buf.size() < 11 && valid_str(&buf[0], 0) && !(strcmp(&buf[0], "nganhan") && strcmp(&buf[0], "daihan") && strcmp(&buf[0], "khongkyhan")))
        {
            strcpy_s(a.Loaitietkiem, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap ho ten khach hang
    while (true)
    {
        printf("Ho ten (30 ki tu): ");
        cin.ignore();
        getline(cin, buf);
        if (buf.size() < 31 && valid_str(&buf[0], 1))
        {
            strcpy_s(a.Tenkh, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap CMND
    while (true)
    {
        printf("Chung minh nhan dan(9/12 so): ");
        cin >> buf;
        if ((buf.size() == 9 || buf.size() == 12) && valid_str(&buf[0], 2))
        {
            strcpy_s(a.CMND, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap ngay mo so
    while (true)
    {
        printf("Ngay mo so(dd/yy/mmmm): ");
        cin.ignore();
        getline(cin, buf);
        if (buf.size() < 21 && valid_date(&buf[0]))
        {
            strcpy_s(a.Ngaymoso, &buf[0]);
            break;
        }
        puts("Khong hop le.");
    }
    //Nhap so tien gui
    while (true)
    {
        printf("So tien gui: ");
        scanf_s("%lf", &a.Tiengui);
        if (a.Tiengui >= 0)
            break;
        puts("Khong hop le.");
    }

    //Tinh ngay mo tai khoan dang so
    a.date = date_to_num(a.Ngaymoso);
    return;
}

/**
 * @brief Hien thi chi tiet so tiet kiem.
 *
 * @param a: So chua du lieu so tiet kiem.
 */
void Xuat(So a)
{
    //In thong tin chi tiet cua so tiet kiem
    puts("=========================================================================");
    printf("Ma so: %s\nLoai tiet kiem: %s\n", a.Maso, a.Loaitietkiem);
    printf("Ten khach hang: %s\nChung minh nhan dan: %s\n", a.Tenkh, a.CMND);
    printf("Ngay mo so: %s\nTien gui: %lf\n", a.Ngaymoso, a.Tiengui);
    puts("=========================================================================");
    return;
}

/**
 * @brief In chi tiet thong tin tat ca cac so tiet kiem trong danh sach.
 */
void Indanhsach()
{
    puts("=========================================================================");
    puts("Thong tin cac so tiet kiem:");
    for (int i = 0; i < arr.size(); i++)
        Xuat(arr[i]);
}

/**
    * @brief Tim kiem so tiet kiem theo nhieu tieu chi.
*/
void Timkiem()
{
    string buf;  //Chuoi de luu thong tin nhap tu nguoi dung
    int choice;  //Lua chon cua nguoi dung trong menu tim kiem
    bool found;  //Bien luu trang thai tim thay hay khong

    while (true)
    {
        //Hien thi menu lua chon tim kiem
        puts("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
        puts("1. Tim kiem theo CMND.");
        puts("2. Tim kiem theo ma so.");
        puts("3. Tim kiem trong khoang thoi gian mo so.");
        printf(">> ");
        cin >> choice;  //Nhan lua chon tu nguoi dung

        //Kiem tra lua chon hop le
        if (choice > 3 || choice < 1)
            continue;

        switch (choice)
        {
            case 1: //Tim kiem theo CMND
                found = false;
                while (true)
                {
                    //Nhap CMND tu nguoi dung
                    printf("Chung minh nhan dan(9/12 so): ");
                    cin.ignore();
                    getline(cin, buf);
                    if ((buf.size() == 9 || buf.size() == 12) && valid_str(&buf[0], 2))
                        break;
                    puts("Khong hop le.");
                }

                //Duyet danh sach va tim theo CMND
                for (int i = 0; i < arr.size(); i++)
                    if (!strcmp(&buf[0], arr[i].CMND))
                    {
                        found = true;
                        Xuat(arr[i]);  //Hien thi thong tin so tiet kiem neu co CMND can tim
                    }
                if (!found)
                    puts("Khong tim thay.");  //Thong bao khong tim thay CMND
                return;

            case 2: //Tim kiem theo ma so
                found = false;
                while (true)
                {
                    //Nhap ma so tu nguoi dung 
                    printf("Ma so(Toi da 5 ki tu): ");
                    cin >> buf;
                    if (buf.size() < 6 && valid_str(&buf[0], 0))
                        break;
                    puts("Khong hop le.");
                }

                //Duyet danh sach va tim theo ma so
                for (int i = 0; i < arr.size(); i++)
                    if (!strcmp(&buf[0], arr[i].Maso))
                    {
                        found = true;
                        Xuat(arr[i]);  //Hien thi thong tin so tiet kiem neu co ma so can tim
                    }
                if (!found)
                    puts("Khong tim thay.");  //Thong bao khong tim thay ma so
                return;

            case 3: //Tim kiem theo khoang thoi gian mo so
                found = false;
                long long l = 0, r;  //Khoang thoi gian (gioi han duoi va tren)

                //Nhap gioi han duoi cua khoang thoi gian
                puts("Khoang can tim kiem:");
                while (true)
                {
                    printf("Gio han duoi(dd/yy/mmmm): ");
                    cin >> buf;
                    if (buf.size() < 21 && valid_date(&buf[0]))
                        break;
                    puts("Khong hop le.");
                }

                l = date_to_num(&buf[0]);

                //Nhap gioi han tren cua khoang thoi gian
                while (true)
                {
                    printf("Gio han tren(dd/yy/mmmm): ");
                    cin >> buf;
                    if (buf.size() < 21 && valid_date(&buf[0]))
                        break;
                    puts("Khong hop le.");
                }
                
                r = date_to_num(&buf[0]);

                //Duyet danh sach va tim cac so trong khoang thoi gian
                for (int i = 0; i < arr.size(); i++)
                    if (arr[i].date >= l && arr[i].date <= r)
                    {
                        found = true;
                        Xuat(arr[i]);  //Hien thi thong tin neu so mo trong khoang thoi gian can tim
                    }
                if (!found)
                    puts("Khong tim thay.");  //Thong bao neu khong tim thay so trong khoang thoi gian
                return;
        }
    }
}


/**
    * @brief So sanh hai so tiet kiem theo so tien gui, giam dan.
    *
    * @param a So tiet kiem thu nhat.
    * @param b So tiet kiem thu hai.
    * @return True neu so a co so tien gui lon hon so b.
*/
bool cmp1(So a, So b)
{
    return a.Tiengui > b.Tiengui;
}

/**
    * @brief So sanh hai so tiet kiem theo ngay mo so, tang dan.
    *
    * @param a So tiet kiem thu nhat.
    * @param b So tiet kiem thu hai.
    * @return True neu so a mo som hon so b.
*/
bool cmp2(So a, So b)
{
    return a.date < b.date;
}

/**
    * @brief Sap xep danh sach so tiet kiem theo tieu chi cho truoc.
*/
void Sapxep()
{
    int choice;
    puts("Chon loai xap xep:");
    puts("1. Tien gui giam dan.");
    puts("2. Ngay mo so tang dan.");
    printf(">> ");
    cin >> choice;
    switch (choice)
    {
        case 1:
            sort(arr.begin(), arr.end(), cmp1);
            break;
        case 2:
            sort(arr.begin(), arr.end(), cmp2);
            break;
        default:
            puts("Khong hop le");
            return;
    }
    puts("Ket qua sau khi sap xep:");\
    for(int i = 0; i < arr.size(); i++)
        Xuat(arr[i]);
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
    puts("1. Xuat du lieu cac so tiet kiem.");
    puts("2. Tim kiem so tiet kiem.");
    puts("3. Sap xep so tiet kiem.");
    puts("4. Thoat.");
    printf(">> ");
    return;
}

int main()
{
    printf("Nhap so luong so tiet kiem: ");
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(def);
        puts("--------------------------------------------------------------------------");
        printf("Nhap thong tin so thu %d:\n", i + 1);
        Nhap(arr[i]);
    }
    int choice;
    while (true)
    {
        menu();
        cin >> choice;
        switch (choice)
        {
            case 1:
                Indanhsach();
                break;
            case 2:
                Timkiem();
                break;
            case 3:
                Sapxep();
                break;
            default:
                exit(0);
        }
    }
}