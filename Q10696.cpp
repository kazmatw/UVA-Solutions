#include <iostream>
using namespace std;

long long f91(long long n)
{
    if (n >= 101)
    {
        return n - 10;
    }
    else
    {
        return f91(f91(n + 11));
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            cout << "f91(" << n << ") = " << f91(n) << endl;
        }
    }
    return 0;
}