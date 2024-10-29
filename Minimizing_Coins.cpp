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
int solve(int x, int n, vector<int> &nums)
{
    if (x == 0)
        return 0;
    if (x < 0)
        return 1e9;
    if (dp[x] != -1)
        return dp[x];

    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, 1 + solve(x - nums[i], n, nums));
    }

    return dp[x] = ans;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    memset(dp, -1, sizeof(dp));

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    int ans = solve(x, n, nums);
    ans = ans == 1e9 ? -1 : ans;
    cout << ans << endl;
}