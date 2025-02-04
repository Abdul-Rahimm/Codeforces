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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    set<int> st;
    int count = n / a + n / b + n / c;

    int first = a * b;
    int second = a * c;
    int third = b * c;
    int x = 0;
    int y = 0;
    int z = 0;
    if (b % a == 0)
    {
        // then all multiples of b
        x = b;
    }
    if (c % a == 0)
    {
        z = c;
    }

    if (c % b == 0)
    {
        // then all multiples of b
        y = c;
    }

    for (int i = 1; first * i < n or second * i < n or third * i < n or (x > 0 and x * i <= n) or (z > 0 and z * i <= n) or (y > 0 and y * i <= n); i++)
    {
        // cout << first * i << " " << second * i << " " << third * i << endl;
        if (first * i <= n)
            st.insert(first * i);
        if (second * i <= n)
            st.insert(second * i);
        if (third * i <= n)
            st.insert(third * i);
        if (x * i <= n)
            st.insert(x * i);
        if (y * i <= n)
            st.insert(y * i);
        if (z * i <= n)
            st.insert(z * i);
    }

    cout << count - st.size();
}