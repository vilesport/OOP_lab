#include "List.h"

List A;
int n;
unsigned int x;
double y;

int main()
{
	while (true)
	{
		cin >> n;
		switch (n)
		{
		case -1:
			A.Display();
			return 0;
		case 0:
			cin >> y;
			A.Push(y);
			break;
		case 1:
			cin >> y;
			A.Pop(y);
			break;
		case 2:
			cin >> y;
			A.Delete(y);
			break;
		case 3:
			cin >> x >> y;
			A.Mod(x, y);
			break;
		}
	}
}
