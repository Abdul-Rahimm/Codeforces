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

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> nums(n + 1, 0);

    for (int i = 0; i < x; i++)
    {
        int u, v;
        cin >> u >> v;

        nums[v]++;
    }

    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if (nums[i] == 0 and ans == -1)
            ans = i;
        else if (nums[i] == 0 and ans != -1)
            ans = -10;
    }

    if (ans == -10)
        cout << -1;
    else
        cout << ans;
}