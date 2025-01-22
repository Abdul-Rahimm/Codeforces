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

    vector<vi> nums;
    int mn = INT_MAX; // all time lowest --> laazmi count hoga

    forn(0, n)
    {
        int m;
        cin >> m;
        vi row(m);
        forn(0, m)
        {
            cin >> row[i];
            mn = min(mn, row[i]);
        }

        sort(all(row));
        nums.push_back(row);
    }

    int lowest = INT_MAX; // second column ka lowest --> total main se discard hoga
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += nums[i][1];
        lowest = min(lowest, nums[i][1]);
    }

    total -= lowest;
    total += mn;

    cout << total << endl;
}