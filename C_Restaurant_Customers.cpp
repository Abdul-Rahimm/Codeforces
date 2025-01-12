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

    vector<vi> nums;
    int mx = INT_MIN;

    forn(0, n)
    {
        int a, b;
        cin >> a >> b;

        mx = max(mx, b);

        nums.push_back({a, b});
    }

    set<pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        int a = nums[i][0];
        int b = nums[i][1];

        st.insert({a, 1});
        st.insert({b + 1, -1});
    }

    int ans = 0;
    int temp = 0;
    for (auto row : st)
    {
        temp += row.second;
        ans = max(ans, temp);
    }

    cout << ans;
}