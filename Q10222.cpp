#include <iostream>
using namespace std;

string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

void print_ans(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            cout << ' ';
        }
        else
        {
            for (int j = 0; j < keyboard.size(); j++)
            {
                if (str[i] == keyboard[j])
                {
                    cout << keyboard[j - 2];
                    break;
                }
            }
        }
    }
}
int main()
{
    string sentence;
    while (getline(cin, sentence))
    {
        print_ans(sentence);
        cout << endl;
    }
    return 0;
}