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

    int n;
    cin >> n;

    if (n <= 10)
    {
        cout << n << endl;
        return;
    }

    // n is > 10
    int count = 10;

    if (n <= 100)
    {
        int add = n / 10;
        count += (add - 1);
        cout << count << endl;
        return;
    }

    // n is greater than 100
    count = 18;
    if (n <= 1000)
    {
        int add = n / 100;
        count += (add);
        cout << count << endl;
        return;
    }

    // n is greater than 1000
    count = 27;
    if (n <= 10000)
    {
        int add = n / 1000;
        count += (add);
        cout << count << endl;
        return;
    }

    // n is greater than 10000
    count = 27 + 9;
    if (n <= 100000)
    {
        int add = n / 10000;
        count += (add);
        cout << count << endl;
        return;
    }

    // n is greater than 10000
    count = 27 + 18;
    if (n <= 1000000)
    {
        int add = n / 100000;
        count += (add);
        cout << count << endl;
        return;
    }
}