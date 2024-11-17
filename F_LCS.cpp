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
map<array<int, 2>, string> dp;
string solve(string &s, string &t, int i, int j)
{
    if (i >= s.size() || j >= t.size())
        return "";

    if (s[i] == t[j])
        return dp[{i, j}] = s[i] + solve(s, t, i + 1, j + 1);

    if (dp.find({i, j}) != dp.end())
        return dp[{i, j}];

    string first = solve(s, t, i + 1, j);
    string second = solve(s, t, i, j + 1);

    return dp[{i, j}] = first.size() > second.size() ? first : second;
}

void solve()
{
    string s, t;
    cin >> s >> t;

    cout << solve(s, t, 0, 0);
}