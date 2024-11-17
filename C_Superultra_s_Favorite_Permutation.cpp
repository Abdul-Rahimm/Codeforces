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
bool isPrime(int n)
{

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

set<int> st;
signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout.tie(nullptr);
    int tc = 1;
    cin >> tc;

    // for (int i = 4; i < 300000; i++)
    // {
    //     if (!isPrime(i))
    //         st.insert(i);
    // }

    for (int i = 1; i <= tc; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    // function<int(int, int)> solve = [&](int i, int j) -> int

    int n;
    cin >> n;
    if (n < 5)
    {
        cout << -1 << endl;
        return;
    }

    int last;
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
        last = i;
    }

    int num;
    for (int i = 2; i <= n; i += 2)
    {
        if (!isPrime(last + i))
        {
            cout << i << " ";
            num = i;
            break;
        }
    }

    for (int i = 2; i <= n; i += 2)
    {
        if (i == num)
            continue;

        cout << i << " ";
    }
}