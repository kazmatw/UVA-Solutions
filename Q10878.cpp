#include <iostream>
using namespace std;

int main()
{
    string s;
    int ASCII;
    while (getline(cin, s))
    {
        if (s[0] == '_')
        {
            continue;
        }
        ASCII = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                ASCII *= 2;
            }
            else if (s[i] == 'o')
            {
                ASCII = ASCII * 2 + 1;
            }
        }
        cout << (char)ASCII;
    }
    return 0;
}