#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n[10005] = {0}, i = 0, len = 0;
    while (cin >> n[i])
    {
        len++;
        i++;
        sort(n, n + len);
        if (len & 1)
        {
            cout << n[(len - 1) / 2] << endl;
        }
        else
        {
            cout << (n[len / 2] + n[len / 2 - 1]) / 2 << endl;
        }
    }
    return 0;
}