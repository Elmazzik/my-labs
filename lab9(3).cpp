#include <iostream>
using namespace std;
int main()
{
	int a = 1, s = 0, p = 1, min = 0, max = 0;

	while (a != 0)
	{
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
		if (a != 0)
		{
			if (a > 10 && a < 25)
			{
				s = s + a;
			}
			if (a > 15)
			{
				p = p + (a * p);
			}
		}
		else
		{
			break;
		}
	}
	cout << "Summa ravna " << s << endl;
	cout << "Proizvedenie ravno " << p << endl;
	cout << "Minimalnoe chislo " << min << endl;
	cout << "Maksimalnoe choslo " << max << endl;
	cin.get();
	cin.get();
}