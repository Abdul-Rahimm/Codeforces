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

    while (tc--)
        solve();

    return 0;
}
void DFS(int i, vi &nums, vector<bool> vis)
{
    if (vis[i] == true)
    {
        cout << i << " ";
        return;
    }

    vis[i] = true;

    DFS(nums[i], nums, vis);
}

void solve()
{
    int n;
    cin >> n;

    vi nums(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i <= n; i++)
    {
        vector<bool> vis(n + 1, false);
        DFS(i, nums, vis);
    }
}