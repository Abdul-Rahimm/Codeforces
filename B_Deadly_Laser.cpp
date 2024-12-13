// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define pb push_back
#define all(x) x.begin(), x.end()
#define int long long
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define forn(a, b) for (int i = a; i < b; i++)
#define nl cout << endl;
#define pii pair<int, int>
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
const int mod = 1e9 + 7;

vector<vi> directions{{1, 0}, {0, 1}, {0, -1}, {-1, 0}};

void solve(int i);

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    // function<int(int, int)> solve = [&](int i, int j) -> int

    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    queue<pii> q;
    vector<vector<bool>> visited(n + 1, vector<bool>(m + 1, false));

    q.push({1, 1});
    int level = 0;

    while (!q.empty())
    {
        int nodes = q.size();
        while (nodes--)
        {
            pii curr = q.front();
            int x = curr.first;
            int y = curr.second;
            q.pop();

            if (x == n && y == m)
            {
                cout << level << endl;
                return;
            }

            for (auto dir : directions)
            {
                int nx = x + dir[0];
                int ny = y + dir[1];

                if ((abs(nx - sx) + abs(ny - sy) <= d) || (nx <= 0 || nx > n || ny <= 0 || ny > m) || visited[nx][ny] == true)
                    continue;

                visited[x][y] = true;
                q.push({nx, ny});
            }
        }
        level++;
    }

    cout << -1 << endl;
    return;
}