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

    vector<string> vec(n);
    for (string &i : vec)
        cin >> i;

    vector<vector<int>> nums(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (vec[i][j] == '1')
                nums[i][j] = 1;
            else
                nums[i][j] = 0;
        }

    vector<int> col_sum(m, 0);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            col_sum[i] += nums[j][i];
        }

    for (int i = 0; i < n; i++)
    {
        int count_ones = 0;
        for (int j = 0; j < m; j++)
        {
            nums[i][j] = col_sum[j] - nums[i][j];
            if (nums[i][j] == 0)
                count_ones++;
        }

        if (count_ones == 0)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}