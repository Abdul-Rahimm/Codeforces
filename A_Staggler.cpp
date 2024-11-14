// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
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
    string s, t;
    cin >> s >> t;
    int ans = 0;

    if (t[t.size() - 1] == 'X')
    {
        ans++;
    }

    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char curr = tolower(t[index]);

        if (curr == s[i])
        {
            index++;
            ans++;
        }
    }

    if (ans >= 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}