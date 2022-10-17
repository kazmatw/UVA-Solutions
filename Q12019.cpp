#include <iostream>
using namespace std;
int main()
{
    char week[7][10] = {"Sunday", "Monday",
                        "Tuesday", "Wednesday", "Thursday",
                        "Friday", "Saturday"};
    int month_days[] = {31, 28, 31, 30, 31,
                        30, 31, 31, 30, 31, 30, 31};
    int n;
    cin >> n;
    while (n--)
    {
        int month, day;
        cin >> month >> day;

        int w = 5;
        for (int i = 1; i < month; i++)
            w += month_days[i - 1];
        w = (w + day) % 7;

        cout << week[w] << endl;
    }
    return 0;
}
