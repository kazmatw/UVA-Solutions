#include <iostream>
using namespace std;
int a[1000000];
int derivative(int x, int max)
{
    long long sum = 0, exp = 1;
    int i;
    for (i = max - 1; i >= 0; i--)
    {
        sum += a[i] * exp * (max - i);
        exp *= x;
    }
    return sum;
}
int main()
{
    int x, n;
    while (cin >> x)
    {
        for (n = 0;; n++)
        {
            cin >> a[n];
            if (getchar() == '\n')
            {
                break;
            }
        }
        cout<<derivative(x, n)<<endl;
    }
    return 0;
}
