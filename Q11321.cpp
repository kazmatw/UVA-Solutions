#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
bool cmp(int x, int y)
{
    int xOdd = abs(x % 2), yOdd = abs(y % 2);
    if (x % m != y % m)
        return x % m < y % m;
    else if (xOdd != yOdd)
        return xOdd > yOdd;
    else if (xOdd)
        return x > y;
    else
        return x < y;
}
int main()
{
    int a[10005];
    while (cin >> n >> m)
    {
        cout << n << " " << m << endl;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
            cout << a[i] << endl;
    }
    return 0;
}
