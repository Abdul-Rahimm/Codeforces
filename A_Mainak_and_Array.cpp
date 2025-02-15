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
    cout.tie(nullptr);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    // function<int(int, int)> solve = [&](int i, int j) -> int

    int n;
    cin >> n;

    vi nums(n);
    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int &i : nums)
    {
        cin >> i;
        mn = min(mn, i);
        mx = max(mx, i);
    }

    // cases
    // smallest and largest already at correct pos
    // largest at correct
    // smallest at correct
    // both not correct but can become correct
    // both not correct and one can become correct (which to choose out of max min)

    if ((nums[0] == mn and nums[n - 1] == mx) or (nums[0] == mn) or (nums[n - 1] == mx))
    {
        cout << mx - mn << endl;
        return;
    }
    else
    {
        int ans = nums[0] - nums[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, abs(nums[i] - nums[i + 1]));
        }
        cout << ans << endl;
        return;
    }
}