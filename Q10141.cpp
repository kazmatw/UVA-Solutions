#include <iostream>
using namespace std;

int main()
{
    int n, p, count = 1;
    string list, producer;
    bool blankspace = 0;

    while (cin >> n >> p)
    {
        float data[2];
        if (n == 0 && p == 0)
        {
            break;
        }
        else
        {
            if (!blankspace)
            {
                blankspace = 1;
            }
            else
            {
                cout << endl;
            }
            for (int i = 0; i < n; i++)
            {
                getline(cin, list);
            }

            for (int i = 0; i < p; i++)
            {
                string temp_producer;
                float temp[2];
                getline(cin, temp_producer);
                cin >> temp[0] >> temp[1];
                if (temp[1] > data[1])
                {
                    producer = temp_producer;
                    data[0] = temp[0];
                    data[1] = temp[1];
                }
                else if (temp[1] == data[1] && temp[0] < data[1])
                {
                    producer = temp_producer;
                    data[0] = temp[0];
                    data[1] = temp[1];
                }
            }
        }
        cout << "RFP #" << count << endl
             << producer << endl;
        count++;
    }
}
