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

    vi nums(n);
    map<int, int> mp;
    for (int &i : nums)
    {
        cin >> i;
        int num = i;
        mp[num]++;
    }
    if (n == 2)
    {
        py return;
    }

    if (mp.size() > 2)
    {
        pn return;
    }
    if (mp.size() == 1)
    {
        py return;
    }

    int index = 0;
    int first, second;
    // for (auto row : mp)
    // {
    //     cout << row.first << " " << row.second << endl;
    // }

    for (auto row : mp)
    {
        if (index == 0)
        {
            first = row.second;
        }
        else
        {
            second = row.second;
        }

        ++index;
    }

    if (abs(first - second) <= 1)
        py else pn
}