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

void solve(int n, string s)
{
    if (n == 0)
    {
        cout << s << endl;
        return;
    }

    string zero = s;
    string one = s;
    zero.push_back('0');
    one.push_back('1');

    solve(n - 1, zero);
    solve(n - 1, one);
}

void solve()
{
    int n;
    cin >> n;

    vector<string> gray;

    gray.push_back("0");
    gray.push_back("1");

    for (int i = 1; i < n; i++)
    {
        int size = gray.size();

        for (int j = size - 1; j >= 0; j--)
        {
            gray.push_back(gray[j]);
        }

        for (int i = 0; i < size; i++)
        {
            string curr = gray[i];
            gray[i] = '0' + curr;
        }
        for (int i = 0 + size; i < size + size; i++)
        {
            string curr = gray[i];
            gray[i] = '1' + curr;
        }
    }

    for (string i : gray)
        cout << i << endl;
}