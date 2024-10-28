#include "Thisinh.h"

ThiSinh* arr;
int n;

int main()
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	arr = new ThiSinh[n + 2]; // Cap phat bo nho cho mang doi tuong
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin thi sinh thu " << i + 1 << "\n";
		arr[i].Nhap();
	}

	ThiSinh Max = arr[0]; // Khoi tao thi sinh co tong diem lon nhat ban dau la thi sinh dau tien
	cout << "Cac thi sinh co tong diem lon hon 15:\n";
	for (int i = 0; i < n; i++)
	{
		// Neu tong diem lon hon 15, thi xuat thong tin thi sinh
		if (arr[i].Tong() > 15)
			arr[i].Xuat();

		// Cap nhat thi sinh co tong diem cao nhat
		if (i && arr[i].Tong() > Max.Tong())
			Max = arr[i];
	}

	cout << "Thi sinh co tong diem cao nhat:\n";
	Max.Xuat(); // Xuat thong tin thi sinh co tong diem cao nhat

	delete[] arr;
	return 0;
}
