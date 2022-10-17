#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        if (a == 0 && b == 0 && c == 0 && d == 0)
        {
            break;
        }
        else
        {
            cout << 1080 + 9 * ((40 + a - b) % 40 + (40 + c - b) % 40 + (40 + c - d) % 40) << endl;
        }
    }

    return 0;
}