#include <iostream>
#include <iomanip> // setprecision()
#include <cmath>   // cos()
using namespace std;
#define PI acos(0) * 2

int main()
{
    double r = 6440, s, a, chord, arc;
    string unit;
    while (cin >> s >> a >> unit)
    {
        if (unit == "min")
            a /= 60;
        if (a > 180)
            a = 360 - a;
        arc = 2 * PI * (r + s) * a / 360;
        chord = (r + s) * sin((a / 2) / 180 * PI) * 2;
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
}