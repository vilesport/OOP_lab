#include "Phanso.h"

int main()
{
	phanso a, b;
	float c;
	cout << "Nhap a b\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "Nhap so thuc c: ";
	cin >> c;
	cout << "a: " << a << "\nb: " << b << "\nc: " << c << " | " << phanso(c) << "\n";
	cout << "Ket qua a voi b:\n";
	cout << "a + b = " << a + b << "\n";
	cout << "a - b = " << a - b << "\n";
	cout << "a * b = " << a * b << "\n";
	cout << "a / b = " << a / b << "\n";
	cout << "a == b = " << ((a == b) ? "True" : "False") << "\n";
	cout << "a != b = " << ((a != b) ? "True" : "False") << "\n";
	cout << "a >= b = " << ((a >= b) ? "True" : "False") << "\n";
	cout << "a <= b = " << ((a <= b) ? "True" : "False") << "\n";
	cout << "a > b = " << ((a > b) ? "True" : "False") << "\n";
	cout << "a < b = " << ((a < b) ? "True" : "False") << "\n";
	cout << "Ket qua a voi c:\n";
	cout << "a + c = " << a + c << "\n";
	cout << "a - c = " << a - c << "\n";
	cout << "a * c = " << a * c << "\n";
	cout << "a / c = " << a / c << "\n";
	cout << "a == c = " << ((a == c) ? "True" : "False") << "\n";
	cout << "a != c = " << ((a != c) ? "True" : "False") << "\n";
	cout << "a >= c = " << ((a >= c) ? "True" : "False") << "\n";
	cout << "a <= c = " << ((a <= c) ? "True" : "False") << "\n";
	cout << "a > c = " << ((a > c) ? "True" : "False") << "\n";
	cout << "a < c = " << ((a < c) ? "True" : "False") << "\n";
}