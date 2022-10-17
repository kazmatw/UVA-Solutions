// note: pow's result is a double or float, so it can't calculate long long
#include <iostream>
using namespace std;

int main()
{
    long long n;
    while (cin >> n)
    {
        cout << (3 * n * n + 6 * n - 15) / 2 << endl;
    }
}