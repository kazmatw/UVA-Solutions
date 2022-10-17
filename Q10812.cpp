#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (y > x || (x + y) & 1)
        {
            cout << "impossible" << endl;
        }
        else
        {
            cout << (x + y) / 2 << " " << (x - y) / 2 << endl;
        }
    }
    return 0;
}