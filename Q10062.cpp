// Note: cin>>string沒過 getline才行
#include <iostream>
using namespace std;

void print_ans(string q)
{
    int a[1005][2] = {0}, point = 0;
    for (int i = 0; i < q.size(); i++)
    {
        int check = 0;
        //如果有出現過數量加一
        for (int j = 0; j < point; j++)
        {
            if (int(q[i]) == a[j][0])
            {
                a[j][1]++;
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            a[point][0] = int(q[i]);
            a[point][1]++;
            point++;
        }
    }

    for (int i = 1; i < point; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][1] < a[j][1])
            {
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
            }
            if (a[i][1] == a[j][1] && a[i][0] > a[j][0])
            {
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
            }
        }
    }

    for (int i = 0; i < point; i++)
    {
        cout << a[i][0] << " " << a[i][1] << endl;
    }
}

int main()
{
    string q;
    bool blankspace = 0;
    while (getline(cin, q))
    {
        if (!blankspace)
        {
            blankspace = 1;
        }
        else
        {
            cout << endl;
        }
        print_ans(q);
    }

    return 0;
}