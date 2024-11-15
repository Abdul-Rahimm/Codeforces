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
#define py cout << "Yes\n";
#define pn cout << "No\n";
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
    unordered_map<int, vector<int>> mp;
    vector<vector<bool>> matrix(3, vector<bool>(3, false));
    forn(0, 3)
    {
        for (int j = 0; j < 3; j++)
        {
            int a;
            cin >> a;
            mp[a] = {i, j};
        }
    }

    int count = 0;

    int q;
    cin >> q;

    forn(0, q)
    {
        int num;
        cin >> num;

        if (mp.find(num) != mp.end())
        {
            vi row = mp[num];
            int i = row[0];
            int j = row[1];
            matrix[i][j] = true;
        }
    }

    // now check the matrix
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][0] == true && matrix[i][1] == true && matrix[i][2] == true)
        {
            py;
            return;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (matrix[0][i] == true && matrix[1][i] == true && matrix[2][i] == true)
        {
            py;
            return;
        }
    }
    int i = 0;
    if (matrix[i][i] == true && matrix[i + 1][i + 1] == true && matrix[i + 2][i + 2] == true)
    {
        py;
        return;
    }
    i = 0;
    int j = 2;
    if (matrix[i][j] == true && matrix[i + 1][j - 1] == true && matrix[i + 2][j - 2] == true)
    {
        py;
        return;
    }

    pn;
}