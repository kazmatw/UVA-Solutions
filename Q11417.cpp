#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    while (x %= y)
        swap(x, y);
    return y;
}

int main()
{
    int ans[502] = {0}, n;
    for (int i = 1; i < 502; i++)
    {
        ans[i] = ans[i - 1];
        for (int j = 1; j < i; j++)
            ans[i] += gcd(i, j);
    }
    while (cin >> n, n)
        cout << ans[n] << endl;
    return 0;
}
