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
    int n;
    cin >> n;

    vector<vector<int>> nums;
    forn(0, n)
    {
        int a, b;
        cin >> a >> b;

        nums.push_back({a, b});
    }
    vector<vector<int>> ans(n, vi(2, 0));

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // A home match
            int game1a = nums[i][0];
            int game1b = nums[j][1];

            if (game1a == game1b)
            {
                ans[i][0]++;
                ans[j][0]++;
            }
            else
            {
                ans[i][0]++;
                ans[j][1]++;
            }

            // B home match
            game1a = nums[i][1];
            game1b = nums[j][0];

            if (game1a == game1b)
            {
                ans[i][0]++;
                ans[j][0]++;
            }
            else
            {
                ans[i][1]++;
                ans[j][0]++;
            }
        }
    }

    for (vector<int> row : ans)
    {
        cout << row[0] << " " << row[1] << endl;
    }
}