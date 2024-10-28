#include "List.h"

List A;
int n;
unsigned int x;
double y;

/**
 * @brief Diem bat dau cua chuong trinh. Cung cap mot giao dien bang menu de tuong tac voi danh sach.
 *
 * Nguoi dung co the nhap cac lenh khac nhau:
 * - `-1` de hien thi danh sach va thoat chuong trinh.
 * - `0` keo theo mot so de them so do vao danh sach.
 * - `1` keo theo mot so de xoa lan xuat hien dau tien cua so do trong danh sach.
 * - `2` keo theo mot so de xoa tat ca lan xuat hien cua so do trong danh sach.
 * - `3` keo theo chi so va mot so de sua doi phan tu tai chi so voi gia tri moi.
 */
int main()
{
	while (true)
	{
		cin >> n;
		switch (n)
		{
		case -1:
			A.Display();
			return 0;
		case 0:
			cin >> y;
			A.Push(y);
			break;
		case 1:
			cin >> y;
			A.Pop(y);
			break;
		case 2:
			cin >> y;
			A.Delete(y);
			break;
		case 3:
			cin >> x >> y;
			A.Mod(x, y);
			break;
		}
	}
}
