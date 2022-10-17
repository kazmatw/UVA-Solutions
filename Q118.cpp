#include <bits/stdc++.h>
using namespace std;
map<pair<int, int>, int> mp_lost;
int direct[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
int n, m;              // n,m is border and d is now direct
int sx, sy, tx, ty, d; // start x , start y ,
char char_d;
string ins; // instruction
map<char, int> map_sd;
map<int, char> back_sd;
    
bool in_grid(int x, int y, int d)
{
    if (x < 0 || x > n || y < 0 || y > m)
        return 0;
    return 1;
}

int main()
{
    cin >> n >> m;
    map_sd['N'] = 0;
    map_sd['W'] = 1;
    map_sd['S'] = 2;
    map_sd['E'] = 3;
    back_sd[0] = 'N';
    back_sd[1] = 'W';
    back_sd[2] = 'S';
    back_sd[3] = 'E';
    while (cin >> sx >> sy >> char_d)
    {
        cin >> ins;
        d = map_sd[char_d];
        bool flag = 1;
        for (int i = 0; i < ins.length(); i++)
        {
            if (ins[i] == 'F')
            {
                tx = sx;
                ty = sy;
                sx += direct[d][0];
                sy += direct[d][1];
                pair<int, int> pa(tx, ty);
                if (!in_grid(sx, sy, d))
                {
                    if (mp_lost[pa])
                    { // indicate past robot fell
                        sx = tx;
                        sy = ty;
                        continue;
                    }
                    cout << tx << ' ' << ty << ' ' << back_sd[d] << ' ' << "LOST" << '\n';
                    mp_lost[pa]++;
                    flag = 0;
                    break;
                }
            }
            if (ins[i] == 'L') // change direction
                d = (d + 5) % 4;
            if (ins[i] == 'R') // change direction
                d = (d + 3) % 4;
        }
        if (flag)
            cout << sx << ' ' << sy << ' ' << back_sd[d] << '\n';
    }
    return 0;
}