#include "Cuu.h"
#include "Bo.h"
#include "De.h"
#include "GiaSuc.h"

string Con[3] = { "bo", "cuu", "de" };
GiaSuc* TrangTrai[3];
long long Keu[3];

/**
 * @brief Tinh toan va phat ra tieng keu ngau nhien cua gia suc trong trang trai.
 *
 * Chuong trinh se chon ngau nhien cac loai gia suc co so luong lon hon 0
 * va phat ra tieng keu tuong ung cua chung.
 *
 * @param Khong co tham so dau vao.
 */
void TinhKeu()
{
	for (int i = 0; i < 3; i++)
		Keu[i] = TrangTrai[i]->GetSoLuong();

	while (Keu[0] != 0 || Keu[1] != 0 || Keu[2] != 0)
	{
		int keu = rand() % 3;
		if (Keu[keu] > 0)
		{
			Keu[keu]--;
			TrangTrai[keu]->Keu();
		}
	}
}

int n;

/**
 * @brief Chuong trinh quan ly trang trai gia suc.
 *
 * Chuong trinh nhap thong tin so luong cua cac loai gia suc (bo, cuu, de),
 * tinh tieng keu cua chung khi chu di vang, sinh con cho moi loai gia suc,
 * va tinh tong so sua ma tat ca gia suc cho.
 */
int main()
{
	cout << "Nhap so luong bo: ";
	cin >> n;
	TrangTrai[0] = new Bo(n);
	cout << "Nhap so luong cuu: ";
	cin >> n;
	TrangTrai[1] = new Cuu(n);
	cout << "Nhap so luong de: ";
	cin >> n;
	TrangTrai[2] = new De(n);
	cout << "Cac tieng keu nghe duoc khi chu di vang:\n";
	TinhKeu();
	for (int i = 0; i < 3; i++)
		TrangTrai[i]->SinhCon();
	cout << "Cac thong tin gia suc sau mot lua:\n";
	for(int i = 0; i < 3; i++)
		printf("So luong %s: %lld con\n", &Con[i][0], TrangTrai[i]->GetSoLuong());
	long long TongSua = 0;
	for (int i = 0; i < 3; i++)
	{
		TrangTrai[i]->TinhSua();
		TongSua += TrangTrai[i]->GetSua();
	}
	printf("Tong so sua ma tat ca gia suc cho trong 1 lan cho sua: %lld\n", TongSua);
}