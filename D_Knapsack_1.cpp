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
int dp[101][100001];
signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;

    while (tc--)
        solve();

    return 0;
}
int solve(int i, vii &nums, int wt)
{
    if (i >= nums.size())
        return 0;
    if (dp[i][wt] != -1)
        return dp[i][wt];

    int take = 0;

    if (wt - nums[i][0] >= 0)
        take = nums[i][1] + solve(i + 1, nums, wt - nums[i][0]);
    int notake = solve(i + 1, nums, wt);

    return dp[i][wt] = max(take, notake);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));

    vii nums;
    forn(0, n)
    {
        int a, b;
        cin >> a >> b;

        nums.push_back({a, b});
    }

    cout << solve(0, nums, m);
}