#include <iostream>
using namespace std;

char status;
int recNum = 0, pointNum = 0;
double rec[12][4], x, y;

void output(float x, float y, int num)
{
    bool check = 0;
    for (int i = 1; i <= recNum; i++)
    {
        if (x > rec[i][0] && x < rec[i][2] && y > rec[i][3] && y < rec[i][1])
        {
            cout << "Point " << num << " is contained in figure " << i << endl;
            check = 1;
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
        else
        {
            recNum++;
            cin >> rec[recNum][0] >> rec[recNum][1] >> rec[recNum][2] >> rec[recNum][3];
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