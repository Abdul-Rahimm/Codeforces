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

void solve()
{
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int count;
        cin >> count;

        for (int j = 0; j < count; j++)
        {
            int num;
            cin >> num;

            mp[num]++;
        }
    }

    int ans = 0;
    for (auto row : mp)
    {
        if (row.second == n)
            ans++;
    }

    cout << ans;
}