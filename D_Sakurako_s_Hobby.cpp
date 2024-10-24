// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef array<int, 2> ii;
typedef vector<ii> vii;
const int mod = 1e9 + 7;

void solve();

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a)
    {
        cin >> x;
        x--;
    }

    string s;
    cin >> s;

    vi ans(n), vis(n);
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;

        int cnt = 0;
        int u = i;

        vector<int> path;
        while (!vis[u])
        {
            vis[u] = 1;
            cnt += s[u] == '0';
            path.push_back(u);
            u = a[u];
        }

        for (int v : path)
        {
            ans[v] = cnt;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}