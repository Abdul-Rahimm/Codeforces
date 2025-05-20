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
vii nums;
int n;

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
map<pair<int, int>, int> mp;
int recur(int i, int end)
{
    if (i >= n)
        return 0;
    if (mp.find({i, end}) != mp.end())
        return mp[{i, end}];

    // take case | nums[i][0] --> startimg of current
    int take = 0;
    if (end == -1 or nums[i][0] >= end)
    {
        take = 1 + recur(i + 1, nums[i][1]);
    }

    // not take case
    int nottake = recur(i + 1, end);

    return mp[{i, end}] = max(take, nottake);
}

void solve()
{
    cin >> n;

    forn(0, n)
    {
        int a, b;
        cin >> a >> b;
        nums.push_back({a, b});
    }

    sort(all(nums));

    cout << recur(0, -1);
}