#include <iostream>
using namespace std;

int main(void)
{
    int T, i, M, N, Q, r, c;
    char map[101][101];
    cin >> T;
    while (T--)
    {
        cin >> M >> N >> Q;
        for (i = 0; i < M; i++)
            scanf("%s", map[i]);
        cout << M << " " << N << " " << Q << endl;
        while (Q--)
        {
            int ans = 1;
            cin >> r >> c;
            for (i = 1; i <= M || i <= N; i++)
            {
                bool stop = 0;
                for (int a = r - i; a <= r + i; a++)
                {
                    for (int b = c - i; b <= c + i; b++)
                    {
                        if (a < 0 || b < 0 || a >= M || b >= N)
                        {
                            stop = 1;
                            break;
                        }
                        if (map[a][b] != map[r][c])
                        {
                            stop = 1;
                            break;
                        }
                    }
                }
                if (!stop)
                    ans += 2;
                else
                    break;
            }
            cout << ans << endl;
        }
    }
}
