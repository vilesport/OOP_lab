#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Diem
{
	float x, y;
};

class Poly
{
	private:
		vector <Diem> arr;
		Diem centroid;
	public:
		Poly()
		{
			arr.clear();
			centroid = { 0, 0 };
		}
		void Nhap();
		void Timtrongtam();
		void Sapxep();
		float Goc(Diem a);
		float Tinhdientich();
};
