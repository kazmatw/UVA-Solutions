#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    double x, a, b, c;
    while (cin >> x)
    {
        c = x * x * (1 + 2.0 * acos(0.0) / 3 - sqrt(3));
        b = (x * x * (2.0 * acos(0.0) / 2 - 1) - c) * 2;
        a = x * x - b - c;
        cout << setprecision(3) << fixed << c << " " << b << " " << a << endl;
    }
    return 0;
}