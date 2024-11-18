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

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;

    while (tc--)
        solve();

    return 0;
}
int n = 1e5 + 1;
int dp[100001];
int solve(vi &nums, int i, int k)
{
    if (i == nums.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int ans = 0;
    for (int j = 1; j <= k; j++)
    {
        int jump = i + j; // i + jump

        if (jump <= nums.size())
            ans = min(ans, abs(nums[i] - nums[jump]) + solve(nums, jump, k));
    }

    return dp[i] = ans;
}

void solve()
{
    int n;
    cin >> n;

    vi nums(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> nums[i];

    memset(dp, -1, sizeof(dp));

    int k = 2;
    cout << solve(nums, 1, k);
}