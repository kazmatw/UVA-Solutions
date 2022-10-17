#include <iostream>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int count = 0;
        bool alphap = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]) && !alphap)
            {
                alphap = 1;
                count++;
            }
            else if (!isalpha(s[i]) && alphap)
            {
                alphap = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}