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
    int ans = 0;
    vector<string> grid;
    forn(0, 10)
    {
        string x;
        cin >> x;
        grid.push_back(x);
    }

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            if (grid[i - 1][j - 1] == 'X')
            {
                // do the case work
                if (i >= 5 and i <= 6 and j >= 5 and j <= 6)
                {
                    ans += 5;
                }
                else if (i >= 4 and i <= 7 and j >= 4 and j <= 7)
                {
                    ans += 4;
                }
                else if (i >= 3 and i <= 8 and j >= 3 and j <= 8)
                {
                    ans += 3;
                }
                else if (i >= 2 and i <= 9 and j >= 2 and j <= 9)
                {
                    ans += 2;
                }
                else if (i >= 1 and i <= 10 and j >= 1 and j <= 10)
                {
                    ans += 1;
                }
            }
        }
    }

    cout << ans << endl;
}