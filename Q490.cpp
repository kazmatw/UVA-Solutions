#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100][101];
    int len[100], n = 0, max = 0; 
    while (cin.getline(str[n], 101))
    {
        len[n] = strlen(str[n]);
        if (len[n] > max)
            max = len[n];
        for (int add = len[n]; add < max; add++)
        {
            str[n][add] = ' ';
            len[n]++;
        }
        n++;
    }
    for (int j = 0; j < max; j++)
    {
        for (int i = n - 1; i >= 0; i--)
            if (j < len[i])
                cout << str[i][j];
        cout << endl;
    }
    return 0;
}
