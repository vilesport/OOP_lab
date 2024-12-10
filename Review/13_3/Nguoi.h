#pragma once
#include <iostream>
#include <string>
using namespace std;

class Nguoi
{
	public:
		string Hoten;
		string Namsinh;
		string CMND;
		string Diachi;
		Nguoi() : Hoten(""), Namsinh(""), CMND(""), Diachi("") {}
		void Nhap();
		void Xuat();
};