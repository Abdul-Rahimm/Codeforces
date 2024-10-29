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
int dp[1000001];
int solve(int n)
{
    if (n < 10)
        return 1;
    if (dp[n] != -1)
        return dp[n];

    int copy = n;
    int ans = 1e9;
    while (copy > 0)
    {
        int current = copy % 10;
        copy /= 10;
        if (current == 0)
            continue;
        ans = min(ans, 1 + solve(n - current));
    }

    return dp[n] = ans;
}
void solve()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    int ans = solve(n);
    cout << ans << endl;
}