#include <iostream>
#include <math.h>
using namespace std;

char status;
int figNum = 0, pointNum = 0;
double fig[25][5], x, y;

void output(float x, float y, int num)
{
    bool check = 0;
    for (int i = 1; i <= figNum; i++)
    {
        if (fig[i][0] == 1)
        {
            double dis;
            dis = pow((x - fig[i][1]), 2) + pow((y - fig[i][2]), 2);
            if (dis < pow(fig[i][3], 2))
            {
                cout << "Point " << num << " is contained in figure " << i << endl;
                check = 1;
            }
        }
        else
        {
            if (x > fig[i][1] && x < fig[i][3] && y > fig[i][4] && y < fig[i][2])
            {
                cout << "Point " << num << " is contained in figure " << i << endl;
                check = 1;
            }
        }
    }
    if (check == 0)
    {
        cout << "Point " << num << " is not contained in any figure" << endl;
    }
}

int main()
{
    while (cin >> status)
    {
        if (status == '*')
            break;
        else if (status == 'c')
        {
            figNum++;
            cin >> fig[figNum][1] >> fig[figNum][2] >> fig[figNum][3];
            fig[figNum][0] = 1;
        }
        else
        {
            figNum++;
            cin >> fig[figNum][1] >> fig[figNum][2] >> fig[figNum][3] >> fig[figNum][4];
            fig[figNum][0] = 2;
        }
    }

    while (cin >> x >> y)
    {
        if (x == 9999.9 && y == 9999.9)
            break;
        else
        {
            pointNum++;
            output(x, y, pointNum);
        }
    }
    return 0;
}