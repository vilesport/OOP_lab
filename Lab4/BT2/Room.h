#pragma once
#include <iostream>
using namespace std;

class Room
{
	protected:
		long long SoDem;
		long long DoanhThu;
	public:
		Room() : SoDem(0), DoanhThu(0) {};
		virtual long long GetDoanhThu();
};