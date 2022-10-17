// cin>>c 一次只讀一個字元 cin.get() 讀一行包含空格
#include <iostream>
#include <cstring>
using namespace std;

char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main()
{
    char c;
    while (cin.get(c))
    {
        c = tolower(c);
        char *p = strchr(s, c);
        if (p)
            cout << *(p - 2);
        else
            cout << c;
    }
    return 0;
}
