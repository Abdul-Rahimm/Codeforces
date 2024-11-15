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
    cout.tie(nullptr);
    int tc = 1;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vii dp(n + 1, vi(n + 1, -1));

    function<int(int, int)> solve = [&](int i, int j) -> int
    {
        if (i > j)
            return 0;
        if (i == j)
            return dp[i][j] = 1;

        if (i + 1 == j)
        {
            if (s[i] == s[j])
                return dp[i][j] = 1;
            else
                return dp[i][j] = 2;
        }

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = INT_MAX;
        ans = min(ans, 1 + min(solve(i + 1, j), solve(i, j - 1)));

        for (int k = i + 1; k <= j; k++)
        {
            if (s[i] == s[k])
                ans = min(ans, solve(i, k - 1) + solve(k + 1, j));
        }

        return dp[i][j] = ans;
    };

    cout << solve(0, n - 1);
}