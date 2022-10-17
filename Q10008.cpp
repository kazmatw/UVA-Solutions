// AC但不知道輸入怎中止
#include <iostream>
//#include <cctype>
using namespace std;

int count[256], len;
int main()
{
    char c;
    while (cin >> c)
        len++, count[toupper(c)]++;
    while (--len)
    {
        for (c = 'A'; c <= 'Z'; c++)
        {
            if (count[c] == len)
                cout << c << " " << count[c] << endl;
        }
    }
    return 0;
}