#include<iostream>
using namespace std;
void main()
{
	char ch;
	int z = 0, s = 0;
	cout << "enter the sequence of symbols\n";
	do
	{
		cout << "vvedite simvol ";
		cin >> ch;
		if (ch != '.')
		{
			s++;
			cout << endl << (int)ch << "\n";
		}
		else {
			cout << "kolichestvo simvolov " << s << "\n";
			break;
		}
	} while (ch != '.');
	cin.get();
	cin.get();
}