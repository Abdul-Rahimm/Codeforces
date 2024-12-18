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
int solve(int n, int from, int aux, int to, vector<pair<int, int>> &pr)
{
    if (n == 1)
    {
        pr.push_back({from, to});
        return 1;
    }

    int a = solve(n - 1, from, to, aux, pr);

    pr.push_back({from, to});

    int b = solve(n - 1, aux, from, to, pr);

    return a + 1 + b;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> pr;

    cout << solve(n, 1, 2, 3, pr) << endl;

    for (auto row : pr)
        cout
            << row.first << " " << row.second << endl;
}