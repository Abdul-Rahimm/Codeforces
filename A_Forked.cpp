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
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    vector<int> x{a, b, a, b, -b, -a, -a, -b};
    vector<int> y{b, a, -b, -a, -a, -b, b, a};

    int xk, yk, xq, yq;
    cin >> xk >> yk >> xq >> yq;
    int ans = 0;
    set<vector<int>> st;

    // calculate 8 positions with respect to the king
    for (int i = 0; i < 8; i++)
    {
        int newkx = xk + x[i];
        int newky = yk + y[i];

        // for every position see if there is a queen
        for (int j = 0; j < 8; j++)
        {
            int newqx = newkx + x[j];
            int newqy = newky + y[j];

            if (newqx == xq and newqy == yq and st.find({newkx, newky, newqx, newqy}) == st.end())
            {
                ans++;
                st.insert({newkx, newky, newqx, newqy});
                break;
            }
        }

        if (ans == 2)
        {
            cout << ans << endl;
            return;
        }
    }

    cout << ans << endl;
}