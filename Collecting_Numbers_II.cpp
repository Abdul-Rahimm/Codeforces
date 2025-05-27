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

    map<int, int> mp;
    vi nums(n);
    forn(0, n)
    {
        int num;
        cin >> num;
        nums[i] = num; // index to number mapping

        mp[num] = i; // number to index mapping
    }

    int initialMoves = 1;

    forn(0, n - 1)
    {
        if (mp[i] > mp[i + 1])
        {
            initialMoves++;
        }
    }

    forn(0, m)
    {
        int x, y;
        cin >> x >> y;

        x--;
        y--;

        int a = nums[x];
        int b = nums[y];

        nums[x] = b;
        nums[y] = a;
        cout << initialMoves << endl;
    }
}