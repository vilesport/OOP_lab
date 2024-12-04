#include "NhanVien.h"
#include "QuanLy.h"
#include "KySu.h"

NhanVien* kysu;
NhanVien* quanly;

/**
 * @brief Chuong trinh quan ly thong tin nhan vien, bao gom ky su va quan ly.
 *
 * Chuong trinh khoi tao QuanLy va KySu, nhap thong tin cua 2 loai nhan vien
 * va xuat thong tin chi tiet cua tung nhan vien sau khi tinh tien luong.
 */
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