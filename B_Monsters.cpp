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

    int n, k;
    cin >> n >> k;

    vi nums(n);
    for (int &i : nums)
    {
        cin >> i;
        i = i % k;
    }

    vector<vector<int>> arr;
    forn(0, n)
    {
        arr.push_back({nums[i], i});
    }

    // sort on numbers first desc
    // then on index asc
    auto comparater = [](vector<int> &a, vector<int> &b)
    {
        if (a[0] != b[0])
        {
            return a[0] > b[0];
        }

        return a[1] < b[1];
    };
    sort(all(arr), comparater);

    forn(0, n)
    {
        if (nums[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }

    for (auto row : arr)
    {
        if (row[0] != 0)
        {
            cout << row[1] + 1 << " ";
        }
        else
            break;
    }

    nl
}