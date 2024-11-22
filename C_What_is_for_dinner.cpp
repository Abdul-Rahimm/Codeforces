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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums(m + 1, -1);

    for (int i = 0; i < n; i++)
    {
        int r, c;
        cin >> r >> c;

        if (nums[r] != -1)
            nums[r] = min(nums[r], c);
        else
            nums[r] = c;
    }

    int ans = 0;
    // 1 2
    // 2 3
    // 3 6

    for (int i = 1; i <= m; i++)
        ans += nums[i];

    cout << min(ans, k);
}