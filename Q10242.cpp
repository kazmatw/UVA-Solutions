#include <iostream>
using namespace std;

int main()
{
    double x[4], y[4], ax, ay;
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
    {
        if (x[2] == x[0] && y[2] == y[0])
        {
            ax = x[3] + (x[1] - x[2]);
            ay = y[3] + (y[1] - y[2]);
        }
        else if (x[2] == x[1] && y[2] == y[1])
        {
            ax = x[3] + (x[0] - x[2]);
            ay = y[3] + (y[0] - y[2]);
        }
        else if (x[3] == x[0] && y[3] == y[0])
        {
            ax = x[2] + (x[1] - x[3]);
            ay = y[2] + (y[1] - y[3]);
        }
        else
        {
            ax = x[2] + (x[0] - x[3]);
            ay = y[2] + (y[0] - y[3]);
        }
        printf("%.3lf %.3lf\n", ax, ay);
    }
    return 0;
}
