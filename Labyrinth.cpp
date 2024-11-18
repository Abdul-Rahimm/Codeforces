// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define pb push_back
#define all(x) x.begin(), x.end()
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
vector<char> directions{'D', 'R', 'L', 'U'};

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;

    while (tc--)
        solve();

    return 0;
}
bool DFS(vector<string> &s, int i, int j, vector<char> &ans)
{
    if (i < 0 || i >= n || j < 0 || j >= m || s[i][j] == '#')
    {
        ans.pop_back();
        return false;
    }

    if (s[i][j] == 'B')
        return true;

    s[i][j] = '#'; // mark it visited

    for (int k = 0; k < 4; k++)
    {
        int nx = i + dir[k][0];
        int ny = j + dir[k][1];
        ans.push_back(directions[k]);

        if (DFS(s, nx, ny, ans))
            return true;
    }

    s[i][j] = '.'; // mark unvisited
}

void solve()
{
    cin >> n >> m;

    vector<string> s(n);
    for (string &i : s)
        cin >> i;

    vector<char> ans;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'A' && DFS(s, i, j, ans))
            {
                cout << "YES" << endl;
                cout << ans.size() << endl;
                for (char i : ans)
                {
                    cout << i;
                }
                return;
            }
        }

    cout << "NO";
}