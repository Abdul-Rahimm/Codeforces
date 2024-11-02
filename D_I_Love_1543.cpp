// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
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
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    for (int i = 0; i < h; i++)
        cin >> s[i];

    int ans = 0;
    for (int r = 0; r + r <= min(h - 1, w - 1); r++)
    {
        string t = "";
        for (int j = r + 1; j < w - r; j++)
        {
            t += s[r][j];
        }
        for (int i = r + 1; i < h - r; i++)
        {
            t += s[i][w - 1 - r];
        }
        for (int j = w - 2 - r; j >= r; j--)
        {
            t += s[h - 1 - r][j];
        }
        for (int i = h - 2 - r; i >= r; i--)
        {
            t += s[i][r];
        }

        t += t.substr(0, 3);

        for (int i = 0; i < t.size(); i++)
        {
            if (t.substr(i, 4) == "1543")
                ans++;
        }
    }

    cout << ans << endl;
}