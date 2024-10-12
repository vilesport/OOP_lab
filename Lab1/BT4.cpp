#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846
using namespace std;

double x, powx;
long long giaithua, p;

/**
 * @brief Tinh gia tri thuc cua phan so powx / giaithua.
 *
 * @return Gia tri thuc cua phan so.
 */
double getnum()
{
	return powx / (double)giaithua;
}

int main()
{
	//Nhap gia tri x tu nguoi dung
	printf("Nhap x de tinh Sin(x) (x radiant): ");
	cin >> x;

	//Dua x ve khoang [0, 2*PI] de tinh toan chinh xac hon
	x -= (int)(x / (2 * PI)) * (double)(2 * PI);
	//Khoi tao cac bien
	double Sinx = 0;  //Gia tri Sin(x)
	giaithua = p = 1; //p la 2n+1, giaithua la (2n+1)!
	powx = x;         //powx la x^(2n+1)
	//Vong lap tinh toan Sin(x)
	while (true)
	{
		//Neu (p / 2) % 2 == 1 thi tru, nguoc lai thi cong
		if ((p / 2) % 2)
			Sinx -= getnum();
		else
			Sinx += getnum();

		//Tinh powx, giaithua, p cho buoc tiep theo
		powx *= x * x; //Nhan powx voi x^2
		giaithua *= (p + 1) * (p + 2); //Cap nhat giai thua
		p += 2; //Tang p len 2 don vi (de lay bac le tiep theo)

		//Kiem tra do chinh xac, neu gia tri nho hon 0.00001 thi dung
		if (getnum() < 0.00001)
			break;
	}

	//In ket qua ra man hinh voi do chinh xac 5 chu so thap phan
	printf("Ket qua la: %.5lf\n", Sinx);
}
