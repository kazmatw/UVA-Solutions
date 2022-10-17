#include <iostream>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int ans = 0;
        if (s[0] == '-')
        {
            break;
        }
        else if (s[0] == '0' && s[1] == 'x')
        {
            for (int i = 2; i < s.size(); i++)
            {
                ans *= 16;
                if (s[i] >= '0' && s[i] <= '9')
                {
                    ans += s[i] - '0';
                }
                else
                {
                    ans += s[i] - 'A' + 10;
                }
            }
            cout << ans << endl;
        }
        else
        {
            cout << "0x";
            for (int i = 0; i < s.size(); i++)
            {
                ans *= 10;
                ans += s[i] - '0';
            }
            printf("%X\n", ans);
        }
    }
    return 0;
}