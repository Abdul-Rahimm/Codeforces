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

void solve()
{
    cin >> n;

    forn(0, n)
    {
        int a, b;
        cin >> a >> b;
        nums.push_back({a, b});
    }

    sort(all(nums), [](const vi &a, const vi &b)
         { return a[1] < b[1]; });

    int ans = 1;
    int start = nums[0][0];
    int end = nums[0][1];

    forn(1, n)
    {
        int currStart = nums[i][0];
        int currEnd = nums[i][1];

        if (currStart >= end)
        {
            ans++;
            start = currStart;
            end = currEnd;
        }
    }

    cout << ans;
}