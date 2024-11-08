#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
	private:
		int iThuc, iAo;
	public:
		SoPhuc();
		SoPhuc(int thuc, int ao);
		SoPhuc(int thuc);
		friend SoPhuc operator + (SoPhuc a, SoPhuc b);
		friend SoPhuc operator - (SoPhuc a, SoPhuc b);
		friend SoPhuc operator * (SoPhuc a, SoPhuc b);
		friend SoPhuc operator / (SoPhuc a, SoPhuc b);
		friend bool operator == (SoPhuc a, SoPhuc b);
		friend bool operator != (SoPhuc a, SoPhuc b);
		friend istream& operator >> (istream& is, SoPhuc& a);
		friend ostream& operator << (ostream& os, SoPhuc a);
};