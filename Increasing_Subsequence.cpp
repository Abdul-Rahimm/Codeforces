// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define int long long
// #define for(n) for(int i = 0; i < n ; i++)
// #define rev(n) for(int i = n; i >= 0 ; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define p1 cout << "-1\n";
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vii;
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
int dp[2001][2001];
int solve(int i, int last, vector<int> &nums)
{
    if (i >= nums.size())
        return 0;
    if (dp[i][last + 1] != -1)
        return dp[i][last + 1];

    int take = 0;
    if (last == -1 || nums[i] > nums[last])
        take = 1 + solve(i + 1, i, nums);

    int nottake = solve(i + 1, last, nums);

    return dp[i][last + 1] = max(take, nottake);
}

void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    memset(dp, -1, sizeof(dp));
    int ans = solve(0, -1, nums);
    cout << ans << endl;
}