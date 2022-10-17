#include <iostream>
using namespace std;

int main()
{
    long long n;
    while (cin >> n)
    {
        if (n < 0)
        {
            break;
        }
        else if (n == 1)
        {
            cout << "0%" << endl;
        }
        else
        {
            cout << n * 25 << "%" << endl;
        }
    }
    return 0;
}