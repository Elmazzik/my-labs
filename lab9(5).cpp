#include <iostream>
using namespace std;
int main()
{
    int ch = 1, m = 1, s = 1;
    if (ch >= 0 && ch <= 24)
    {
        cout << "Kolichestvo chasov: ";
        cin >> ch;
        ch = ch + ch * 3600;
    }
    else
        cout << " Nekorrektno vvedennoe znachenie " << endl;
    if (m >= 0 && m <= 60)
    {
        cout << "Kolichestvo minut: ";
        cin >> m;
        m = m + m * 60;
    }
    else
        cout << " Nekorrektno vvedennoe znachenie " << endl;
    if (s >= 0 && s <= 60)
    {
        cout << "Kolichestvo sekund: ";
        cin >> s;
        s = s + m + ch;
    }
    else
        cout << " Nekorrektno vvedennoe znachenie " << endl;
    cout << "Kolichestvo sekund = " << s;
}