#include "ThoiGian.h"

int main()
{
	ThoiGian a, b;
	int c;
	cout << "Nhap thoi gian a b\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "Nhap so giay c: ";
	cin >> c;
	cout << "a: " << a << "\nb: " << b << "\nc: " << c << " | " << ThoiGian(c) << "\n";
	cout << "a++: " << a++ << " | ";
	cout << a << "\n";
	cout << "++a: " << ++a << " | ";
	cout << a << "\n";
	cout << "a--: " << a-- << " | ";
	cout << a << "\n";
	cout << "--a: " << --a << " | ";
	cout << a << "\n";
	cout << "Ket qua a voi b:\n";
	cout << "a + b = " << a + b << "\n";
	cout << "a - b = " << a - b << "\n";
	cout << "a == b = " << ((a == b) ? "True" : "False") << "\n";
	cout << "a != b = " << ((a != b) ? "True" : "False") << "\n";
	cout << "a >= b = " << ((a >= b) ? "True" : "False") << "\n";
	cout << "a <= b = " << ((a <= b) ? "True" : "False") << "\n";
	cout << "a > b = " << ((a > b) ? "True" : "False") << "\n";
	cout << "a < b = " << ((a < b) ? "True" : "False") << "\n";
	cout << "Ket qua a voi c:\n";
	cout << "a + c = " << a + c << "\n";
	cout << "a - c = " << a - c << "\n";
	cout << "a == c = " << ((a == c) ? "True" : "False") << "\n";
	cout << "a != c = " << ((a != c) ? "True" : "False") << "\n";
	cout << "a >= c = " << ((a >= c) ? "True" : "False") << "\n";
	cout << "a <= c = " << ((a <= c) ? "True" : "False") << "\n";
	cout << "a > c = " << ((a > c) ? "True" : "False") << "\n";
	cout << "a < c = " << ((a < c) ? "True" : "False") << "\n";
}