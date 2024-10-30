// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
const int mod = 1e9 + 7;

void solve();

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;

    while (tc--)
        solve();

    return 0;
}
int dp[5001][5001];
int solve(int i, int j, string a, string b)
{
    if (i == a.size())
    {
        return b.size() - j;
    }
    else if (j == b.size())
    {
        return a.size() - i;
    }
    if (a[i] == b[j])
        return dp[i][j] = solve(i + 1, j + 1, a, b);
    if (dp[i][j] != -1)
        return dp[i][j];

    int replace = 1 + solve(i + 1, j + 1, a, b);
    int addone = 1 + solve(i, j + 1, a, b);
    int deleted = 1 + solve(i + 1, j, a, b);

    return dp[i][j] = min(replace, min(addone, deleted));
}

void solve()
{
    string a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    int ans = solve(0, 0, a, b);
    cout << ans;
}