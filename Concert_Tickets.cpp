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
    multiset<int> st;

    forn(0, n)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    forn(0, m)
    {
        int curr;
        cin >> curr;

        auto iterator = st.upper_bound(curr);

        if (iterator == st.begin())
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            iterator--;
            cout << *iterator << endl;
            st.erase(iterator);
        }
    }
}