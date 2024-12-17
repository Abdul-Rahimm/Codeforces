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
bool isPossible(int mid, vi &nums, int k)
{
    int count = 0;
    int total = 0;

    for (int i = 0; i < nums.size();)
    {
        while (i < nums.size() && total + nums[i] <= k)
        {
            total += nums[i];
            i++;
        }

        count++;
        total = 0;
        // i++;
    }

    return count <= mid;
}
void solve()
{
    // freopen("cowdance.in", "r", stdin);
    int n, tmax;
    cin >> n >> tmax;

    // freopen("cowdance.out", "w", stdout);

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    sort(all(nums));

    int l = 1;
    int r = *max_element(nums.begin(), nums.end());
    int ans;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (isPossible(mid, nums, tmax))
        {
            ans = mid;
            cout << "--> ";
            r = mid - 1;
        }
        else
            l = mid + 1;

        cout << l << " " << r << " " << mid << endl;
    }

    cout << ans;
}