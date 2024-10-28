#include "Thisinh.h"

ThiSinh* arr;
int n;

/**
 * @brief Diem bat dau cua chuong trinh. Thuc hien nhap thong tin thi sinh, in ra cac thi sinh co tong diem lon hon 15 va tim thi sinh co tong diem cao nhat.
 * 
 * Chuong trinh nhap vao thong tin cua n thi sinh, bao gom ten, MSSV, ngay sinh, va diem cac mon Toan, Van, Anh. Sau do, chuong trinh se in ra cac thi sinh co tong diem
 * cao hon 15 va tim ra thi sinh co tong diem cao nhat.
 * 
 * @return int Tra ve 0 khi chuong trinh ket thuc.
 */
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
