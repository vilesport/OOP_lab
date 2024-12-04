#include "NhanVien.h"
#include "QuanLy.h"
#include "KySu.h"

NhanVien* kysu;
NhanVien* quanly;

int main()
{
	kysu = new KySu();
	quanly = new QuanLy();
	cout << "Nhap thong tin quan ly\n";
	quanly->Nhap();
	cout << "Nhap thong tin ky su\n";
	kysu->Nhap();
	cout << "Thong tin quan ly:\n";
	quanly->Xuat();
	cout << "Thong tin ky su:\n";
	kysu->Xuat();
}