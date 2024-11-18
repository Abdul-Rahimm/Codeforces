// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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

    while (tc--)
        solve();

    return 0;
}
int solve(int n, vi &dp)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];

    int ans = 0;
    for (int i = 1; i <= min(n, 6ll); i++)
    {
        ans = (ans + solve(n - i, dp)) % mod;
    }

    return dp[n] = ans % mod;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);
    cout << solve(n, dp);
}