// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define pb push_back
#define all(x) x.begin(), x.end()
#define int double
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
    int n, u;
    cin >> n >> u;

    vector<int> nums(n);
    for (int &i : nums)
        cin >> i;

    int ans = 0;

    int i = 0;
    int j = 2;

    while (j < n)
    {
        while (i + 2 < j && nums[j] - nums[i] > u)
            i++;

        int newAns = 0;
        if (i + 1 < n && nums[j] - nums[i] <= u && nums[j] - nums[i] != 0)
            newAns = (nums[j] - nums[i + 1]) / (nums[j] - nums[i]);

        ans = max(ans, newAns);
        j++;
    }
    if (ans == 0)
        ans = -1;

    cout << setprecision(15) << ans;
}