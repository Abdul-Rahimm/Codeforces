// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
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
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    if (nums[0] == 1)
        nums[0]++;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == 1)
            nums[i]++;

        while (nums[i] % nums[i - 1] == 0)
        {
            nums[i]++;
        }
    }

    for (int i : nums)
        cout << i << " ";
    cout << endl;

    // 1 1 3 2 3
    // 2 1 3
}