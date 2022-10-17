#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double a, score[1005], sum = 0;
        double avr = 0;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> score[i];
            sum += score[i];
        }
        avr = sum / a;
        double count = 0;
        for (int i = 0; i < a; i++)
        {
            if (score[i] > avr)
            {
                count++;
            }
        }
        cout << setprecision(3) << fixed << count * 100 / a << "%" << endl;
    }
    return 0;
}