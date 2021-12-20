#include<iostream>
using namespace std;
int main()
{
    int i, j, s;
    s = 0;
    for (i = 2; ; i += 2)
    {
        cout << "Enter j: ";
        cin >> j;
        if (j != 0)
        {
            cout << i << endl;
            s = s + i * j;
        }
        else
        {
            cout << s << endl;
            break;
        }
        cin.get();
    }
}