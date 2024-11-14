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

void solve(int i);

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
        solve(i++);

    return 0;
}
int solve(string s, int i, int j, vii &dp)
{
    // case such as aaa --> i and j will become same
    if (i == j)
        return 0;

    // cases where string len is even --> aaaa OR aaba
    if (i + 1 == j)
    {
        if (s[i] == s[j])
            return 0;
        else
            return 1;
    }

    int ans = INT32_MAX;
    // if chars same no worries
    if (s[i] == s[j])
        ans = solve(s, i + 1, j - 1, dp);

    // chars not same try both possibilites. appending at start or append at end
    ans = min(ans, 1 + min(solve(s, i + 1, j, dp), solve(s, i, j - 1, dp)));

    return ans;
}

void solve(int i)
{
    string s;
    cin >> s;

    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

    cout << "Case " << i << ": " << solve(s, 0, s.size() - 1, dp) << endl;
}