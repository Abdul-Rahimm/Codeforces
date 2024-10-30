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
int dp[1001][1001];
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
int solve(int i, int j, vector<vector<char>> &nums)
{
    if (i == nums.size() - 1 && j == nums[0].size())
        return 1;
    if (i >= nums.size() || j >= nums[0].size())
        return 0;
    if (nums[i][j] == '*')
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int right = solve(i, j + 1, nums) % mod;
    int down = solve(i + 1, j, nums) % mod;

    return dp[i][j] = (down + right) % mod;
}
void solve()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));

    vector<vector<char>> nums(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> nums[i][j];
        }
    }

    int ans = solve(0, 0, nums);
    cout << ans << endl;
}