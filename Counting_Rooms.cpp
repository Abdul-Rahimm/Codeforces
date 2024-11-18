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

void solve();
int n, m;

vii dir{{1, 0}, {0, 1}, {0, -1}, {-1, 0}};

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;

    while (tc--)
        solve();

    return 0;
}
void DFS(vector<string> &s, int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || s[i][j] == '#')
        return;

    s[i][j] = '#'; // mark it visited

    for (vector<int> row : dir)
    {
        int nx = i + row[0];
        int ny = j + row[1];

        DFS(s, nx, ny);
    }
}

void solve()
{
    cin >> n >> m;

    vector<string> s(n);
    for (string &i : s)
        cin >> i;

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                ans++;
                DFS(s, i, j);
            }
        }

    cout << ans;
}