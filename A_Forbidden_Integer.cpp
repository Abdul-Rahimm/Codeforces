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

void solve(int i);

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    // function<int(int, int)> solve = [&](int i, int j) -> int

    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        py
                cout
            << n << endl;
        forn(0, n)
        {
            cout << 1 << " ";
        }
        nl return;
    }

    if (k == 1)
    {
        pn return;
    }

    if (k == 2)
    {
        if (n % 2 == 1)
        {
            pn return;
        }
        else
        {
            py cout << n / 2 << endl;
            forn(0, n / 2)
            {
                cout << 2 << " ";
            }
            nl
        }
        return;
    }

    // k >= 3
    if (n % 2 == 0)
    {
        py
                cout
            << n / 2 << endl;
        forn(0, n / 2)
        {
            cout << 2 << " ";
        }
        nl
    }
    else
    {
        py
                cout
            << n / 2 << endl;

        cout << 3 << " ";
        forn(0, (n / 2) - 1)
        {
            cout << 2 << " ";
        }
        nl
    }
}