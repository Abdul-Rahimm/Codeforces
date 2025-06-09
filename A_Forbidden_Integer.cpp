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
    if (k == 1 and x == 1)
    {
        pn return;
    }

    // either k is not 1 or x is not 1
    //  k will always be >=x

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

    // x is 1
    // 2 and 3 can make any number >= 5
    if (k == 2)
    {
        // means only 2 is available
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
            pn

                return;
    }

    // reaching this point means k >= 3
    int count = 0;
    while (n >= 3)
    {
        ++count;
        n -= 3;
    }
    if (n > 0)
        ++count;
    py
            cout
        << count << endl;
    forn(0, count - 2)
    {
        cout << 3 << " ";
    }

    if (n == 1 and x == 1)
    {
        cout << 2 << " " << 2 << endl;
    }
    else if (n > 0)
    {
        cout << 3 << " " << 1 << endl;
    }
    else if (n == 0)
    {
        cout << 3 << endl;
    }
}