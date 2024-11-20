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
    string s;
    cin >> s;

    int k;
    cin >> k;

    int n = s.size();
    int countDot = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            countDot++;
    }

    if (countDot <= k)
    {
        cout << n;
        return;
    }

    int i = 0;
    int j = 0;
    int count = 0;
    int window = 0;

    while (j < n)
    {
        if (s[j] == 'X')
        {
            window = max(window, j - i + 1);
            j++;
            continue;
        }

        // we have a dot here
        count++;

        while (count > k)
        {
            if (s[i] == '.')
                count--;

            i++;
        }
        window = max(window, j - i + 1);

        j++;
    }

    cout << window;
}