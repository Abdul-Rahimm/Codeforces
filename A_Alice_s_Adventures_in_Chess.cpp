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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int x = 0, y = 0;
    int count = 1;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                y++;
            }
            else if (s[i] == 'E')
            {
                x++;
            }
            else if (s[i] == 'S')
            {
                y--;
            }
            else if (s[i] == 'W')
            {
                x--;
            }

            if (x == a && y == b)
            {
                cout << "YES" << endl;
                return;
            }
        }

        if (count > 1000)
        {
            cout << "NO" << endl;
            return;
        }
        count++;
    }
}