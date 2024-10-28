#pragma once
#include <iostream>
using namespace std;

class List
{
	private:
		double* arr;
		unsigned int size;
	public:
		List()
		{
			arr = NULL;
			size = 0;
		}
		void Push(double x);
		void Pop(double x);
		void Delete(double x);
		void Mod(unsigned int x, double y);
		void Display();
};
