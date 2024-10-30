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
map<array<int, 2>, int> dp;
int solve(int i, int n, int x, vector<int> &prices, vector<int> &pages)
{
    if (i >= n)
        return 0;
    if (dp.count({i, x}))
        return dp[{i, x}];
    int take = 0;
    if (x - prices[i] >= 0)
        take = pages[i] + solve(i + 1, n, x - prices[i], prices, pages);
    int notake = solve(i + 1, n, x, prices, pages);

    return dp[{i, x}] = max(take, notake);
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vi prices(n);
    for (int &i : prices)
        cin >> i;

    vi pages(n);
    for (int &i : pages)
        cin >> i;

    int ans = solve(0, n, x, prices, pages);
    cout << ans << endl;
}

// get a book
// get a second book
// check if both books have price under constraint
// max out choice of second book