#include <iostream>
using namespace std;
void main()
{
	int a, b;
	for (a = 1; a < 6; a++)
	{
		for (b = 5; b >= a; b--) {
			cout << a << " ";
		}
		cout << endl;
	}
	cin.get();
	cin.get();
}