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
    int n, m;
    cin >> n >> m;

    vi dist(n + m), binary(n + m);

    for (int &i : dist)
        cin >> i;
    for (int &i : binary)
        cin >> i;

    vi riders, taxis;
    forn(0, n + m)
    {
        if (binary[i])
            taxis.pb(dist[i]);
        else
            riders.pb(dist[i]);
    }

    vi ans(taxis.size(), 0);

    // binary search logic
    for (auto rider : riders)
    {
        int idx = lower_bound(all(taxis), rider) - taxis.begin();
        cout << idx << endl;

        if (idx == taxis.size())
            ans[idx - 1]++;
        else if (idx == 0)
            ans[0]++;
        else
        {
            int d1 = abs(rider - taxis[idx]);
            int d2 = abs(rider - taxis[idx - 1]);

            if (d2 <= d1)
            {
                ans[idx - 1]++;
            }
            else
            {
                ans[idx]++;
            }
        }
    }

    for (int i : ans)
        cout << i << " ";
}