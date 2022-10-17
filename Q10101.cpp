// CPE book P93 它原本寫了很多沒必要的程式碼
#include <iostream>
#define base 10000000
using namespace std;
void kuti(int data)
{
    string s[] = {" lakh", " hajar", " shata", ""};
    int bases[] = {100000, 1000, 100, 1};
    int mod[] = {100, 100, 10, 100};
    for (int k = 0; k < 4; k++)
    {
        int v = data / bases[k] % mod[k];
        if (v)
            cout << " " << v << s[k];
    }
}

int main()
{
    long long n, num = 0;
    while (cin >> n)
    {
        printf("%4d.", ++num);
        long long a = n / base / base % base;
        long long b = n / base % base;
        long long c = n % base;
        kuti(a);
        if (a)
            cout << " kuti";
        kuti(b);
        if (a | b)
            cout << " kuti";
        kuti(c);
        if (n == 0)
            cout << " 0";
        cout << endl;
    }
}
