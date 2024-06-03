#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (char &c : s)
    {
        if (c == '0')
        {
            c = '5';
        }
    }
    cout << s;
    return 0;
}
