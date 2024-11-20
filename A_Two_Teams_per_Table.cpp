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
    int n;
    cin >> n;

    vector<bool> vis(n + 1, false);
    set<int> st;

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            st.insert(i);
            int num;
            while (cin >> num)
            {
                if (num == 0)
                    break;
                vis[num] = true;
            }
        }
        else
        {
            int num;
            while (cin >> num)
            {
                if (num == 0)
                    break;
            }
        }
    }

    cout << st.size() << endl;
    for (int i : st)
        cout << i << " ";
}