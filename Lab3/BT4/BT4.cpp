#include "Date.h"

int main()
{
	NgayThangNam a, b;
	int c;
	cout << "Nhap ngay a b\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "Nhap so ngay c: ";
	cin >> c;
	cout << "a: " << a << "\nb: " << b << "\nc: " << c << " | " << NgayThangNam(c) << "\n";
	cout << "a++: " << a++ << " | ";
	cout << a << "\n";
	cout << "++a: " << ++a << " | ";
	cout << a << "\n";
	cout << "a--: " << a-- << " | ";
	cout << a << "\n";
	cout << "--a: " << --a << " | ";
	cout << a << "\n";
	cout << "Ket qua a voi b:\n";
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