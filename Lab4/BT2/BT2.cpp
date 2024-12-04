#include "Room.h"
#include "Business.h"
#include "Premium.h"
#include "Deluxe.h"
#include <string>

long long sum[4];

string phong[4]{ "", "loai Deluxe", "loai Premium", "loai Business" };

int main()
{
	Deluxe a(10, 300000, 500000);
	Deluxe b(30, 100000, 200000);
	Premium c(14, 200000);
	Premium d(7, 100000);
	Business e(21);
	sum[1] += a.GetDoanhThu() + b.GetDoanhThu();
	sum[2] += c.GetDoanhThu() + d.GetDoanhThu();
	sum[3] += e.GetDoanhThu();
	long long result = sum[1];
	for (int i = 2; i < 4; i++)
		if (result < sum[i])
			result = sum[i];
	
	for (int i = 1; i < 4; i++)
	{
		if (result == sum[i])
			printf("Doanh thu cua %s nhieu nhat voi %lldd\n", &phong[i][0], result);
	}

}