// Note: &&'s order is in front of ||'s
#include <iostream>
using namespace std;

void print_ans(int x, int y)
{
    int count = 0, temp = 0, adding = 0;
    while (x || y)
    {
        adding = x % 10 + y % 10 + temp;
        if (adding >= 10)
        {
            temp = 1;
            count++;
        }
        else
        {
            temp = 0;
        }
        x /= 10;
        y /= 10;
    }
    if (count == 0)
    {
        cout << "No carry operation." << endl;
    }
    else if (count == 1)
    {
        cout << "1 carry operation." << endl;
    }
    else
    {
        cout << count << " carry operations." << endl;
    }
}

int main()
{
    int x, y;
    while (cin >> x >> y && (x != 0 || y != 0))
    {
        print_ans(x, y);
    }
    return 0;
}
