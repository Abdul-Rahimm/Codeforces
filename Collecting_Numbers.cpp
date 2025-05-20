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
    map<int, int> mp;

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        mp[num] = index;
        ++index;
    }
    int ans = 1; // will take one turn atleast to collect numbers
    for (int i = 1; i < n; i++)
    {
        // x should occur before x+1 to be counted in single baari

        // x occurs after x+1 for eg: 4 3
        // two turns
        if (mp[i] > mp[i + 1])
            ans++;
    }

    cout << ans;
}