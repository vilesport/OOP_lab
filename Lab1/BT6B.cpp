#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Hocsinh
{
	string Hoten = "";
	double Toan = 0, Van = 0, Anh = 0;
	double Trungbinh = 0;
};

int n; //So luong hoc sinh
Hocsinh def; //Doi tuong hoc sinh mac dinh
vector<Hocsinh> arr; //Mang chua thong tin cac hoc sinh

/**
 * @brief Tinh diem trung binh cua mot hoc sinh.
 * 
 * @param a: Doi tuong hoc sinh can tinh diem trung binh (tham chieu).
 */
void DiemTrungBinh(Hocsinh& a)
{
	a.Trungbinh = ((a.Toan * 2) + a.Van + a.Anh) / 4; //Diem Toan nhan he so 2
	return;
}

/**
 * @brief Hien thi menu lua chon cho nguoi dung.
 */
void menu()
{
	puts("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
	puts("Ban muon lam gi?");
	puts("1. Nhap thong tin cho n hoc sinh.");
	puts("2. Tinh diem trung binh cua moi hoc sinh.");
	puts("3. Xep loai hoc sinh.");
	puts("4. Tim va xuat thong tin hoc sinh co diem trung binh cao nhat.");
	puts("5. Tim hoc sinh theo ten.");
	puts("6. Danh sach hoc sinh co diem toan thap nhat.");
	puts("7. Thoat.");
	printf(">> ");
}

/**
 * @brief Kiem tra xau co hop le hay khong (chi chua ky tu chu cai hoac khoang trang).
 *
 * @param a: Xau can kiem tra.
 * @return true Neu xau hop le.
 * @return false Neu xau khong hop le.
 */
bool valid(string a)
{
	for (int i = 0; i < a.size(); i++)
		if ((a[i] < 'A' || a[i] > 'z' || (a[i] > 'Z' && a[i] < 'a')) && a[i] != ' ')
			return false;
	return true;
}

/**
 * @brief Kiem tra xau a co nam trong xau b hay khong.
 *
 * @param a: Xau can tim.
 * @param b: Xau de kiem tra.
 * @return true Neu xau a co trong b.
 * @return false Neu xau a khong co trong b.
 */
bool equal(string a, string b)
{
	if (a.size() > b.size())
		return false;
	for (int i = (int)(b.size() - a.size()), j = 0; i < b.size(); i++, j++)
	{
		//So sanh khong phan biet chu hoa va chu thuong
		if (b[i] == a[j] || char(b[i] - ('a' - 'A')) == a[j] || b[i] == char(a[j] - ('a' - 'A')))
			continue;
		return false;
	}
	return true;
}

/**
 * @brief Nhap thong tin cua n hoc sinh.
 */
void Nhap()
{
	printf("Nhap n: ");
	cin >> n;
	arr.clear(); //Xoa mang truoc khi them moi
	for (int i = 0; i < n; i++)
	{
		arr.push_back(def); //Them hoc sinh mac dinh vao mang
		puts("=========================================================================");
		printf("Thong tin hoc sinh thu %d:\n", i + 1);

		//Nhap ten
		while (true)
		{
			printf("Ten hoc sinh: ");
			cin.ignore();
			getline(cin, arr[i].Hoten);
			if (valid(arr[i].Hoten))
				break;
			puts("Ten khong hop le, vui long nhap lai.");
		}

		//Nhap diem Toan
		while (true)
		{
			printf("Diem Toan: ");
			cin >> arr[i].Toan;
			if (arr[i].Toan >= 0 && arr[i].Toan <= 10)
				break;
			puts("Diem khong hop le, vui long nhap lai.");
		}

		//Nhap diem Van
		while (true)
		{
			printf("Diem Van: ");
			cin >> arr[i].Van;
			if (arr[i].Van >= 0 && arr[i].Van <= 10)
				break;
			puts("Diem khong hop le, vui long nhap lai.");
		}

		//Nhap diem Anh
		while (true)
		{
			printf("Diem Anh: ");
			cin >> arr[i].Anh;
			if (arr[i].Anh >= 0 && arr[i].Anh <= 10)
				break;
			puts("Diem khong hop le, vui long nhap lai.");
		}

		//Tinh diem trung binh cho hoc sinh vua nhap
		DiemTrungBinh(arr[i]);
	}
}

/**
 * @brief Xuat diem trung binh cua cac hoc sinh.
 */
void Trungbinh()
{
	puts("=========================================================================");
	puts("Diem trung binh cua cac hoc sinh:");
	for (int i = 0; i < arr.size(); i++)
		printf("[%s]: %.2lf\n", &arr[i].Hoten[0], arr[i].Trungbinh);
}

/**
 * @brief Tra ve xep loai cua hoc sinh dua tren diem trung binh.
 *
 * @param a: Doi tuong hoc sinh.
 * @return string Xep loai cua hoc sinh (Yeu, Trung binh, Kha, Gioi, Xuat sac).
 */
string Loai(Hocsinh a)
{
	if (a.Trungbinh < 5)
		return "Yeu";
	if (a.Trungbinh < 6.5)
		return "Trung binh";
	if (a.Trungbinh < 8)
		return "Kha";
	if (a.Trungbinh < 9)
		return "Gioi";
	return "Xuat sac";
}

/**
 * @brief Xuat thong tin cua hoc sinh a.
 *
 * @param a: Doi tuong hoc sinh can xuat thong tin.
 * @param mode: Che do in. Mode = 0 chi in ho ten. Mode = 1 in day du thong tin.
 */
void Xuat(Hocsinh a, int mode)
{
	puts("=========================================================================");
	printf("Ho ten: %s\n", &a.Hoten[0]);
	if(mode)
		printf("Diem Toan: %.2lf\nDiem Van: %.2lf\nDiem Anh: %.2lf\n", a.Toan, a.Van, a.Anh);
	puts("=========================================================================");
}

/**
 * @brief Xuat xep loai cua cac hoc sinh.
 */
void Xeploai()
{
	puts("=========================================================================");
	puts("Xep loai cua cac hoc sinh:");
	for (int i = 0; i < arr.size(); i++)
		printf("[%s]: %s\n", &arr[i].Hoten[0], &Loai(arr[i])[0]);
}

/**
 * @brief Tim va xuat thong tin hoc sinh co diem trung binh cao nhat.
 */
void Timtrungbinh()
{
	puts("=========================================================================");
	Hocsinh res = arr[0];	
	for (int i = 1; i < arr.size(); i++)
		if (arr[i].Trungbinh > res.Trungbinh)
			res = arr[i];
	puts("Hoc sinh co diem trung binh cao nhat la:");
	Xuat(res, 1);
}

/**
 * @brief Tim va xuat thong tin hoc sinh theo ten.
 */
void Timtheoten()
{
	string target;
	puts("=========================================================================");
	while (true)
	{
		printf("Nhap ten hoc sinh can tim: ");
		cin.ignore();
		getline(cin, target);
		if (valid(target))
			break;
		puts("Ten khong hop le, vui long nhap lai.");
	}
	for (int i = 0; i < arr.size(); i++)
		if (equal(target, arr[i].Hoten))
			Xuat(arr[i], 1);
}

/**
 * @brief Xuat danh sach hoc sinh co diem Toan thap nhat.
 */
void Danhsach()
{
	double lowest = arr[0].Toan;
	for (int i = 1; i < arr.size(); i++)
		if (arr[i].Toan < lowest)
			lowest = arr[i].Toan;
	puts("Danh sach hoc sinh co diem Toan thap nhat:\n");
	for (int i = 0; i < arr.size(); i++)
		if (arr[i].Toan == lowest)
			Xuat(arr[i], 0);
}

int main()
{
	int choice = 0;
	while (true) //Hien thi menu va thuc hien lua chon cua nguoi dung
	{
		menu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			Nhap();
			break;
		case 2:
			Trungbinh();
			break;
		case 3:
			Xeploai();
			break;
		case 4:
			Timtrungbinh();
			break;
		case 5:
			Timtheoten();
			break;
		case 6:
			Danhsach();
			break;
		default:
			exit(0);
		}
	}
}