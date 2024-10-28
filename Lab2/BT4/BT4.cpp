#include "Thisinh.h"

ThiSinh* arr;
int n;

int main()
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	arr = new ThiSinh[n + 2];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin thi sinh thu " << i + 1 << "\n";
		arr[i].Nhap();
	}

	ThiSinh Max = arr[0];
	cout << "Cac thi sinh co tong diem lon hon 15:\n";
	for (int i = 0; i < n; i++)
	{
		if (arr[i].Tong() > 15)
			arr[i].Xuat();
		if (i && arr[i].Tong() > Max.Tong())
			Max = arr[i];
	}

	cout << "Thi sinh co tong diem cao nhat:\n";
	Max.Xuat();

	delete[] arr;
	return 0;
}
