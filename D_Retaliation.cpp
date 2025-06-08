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
bool solve(vector<int> &nums)
{
    int n = nums.size();
    if (all_of(nums.begin(), nums.end(), [](int i)
               { return i == 0; }))
    {
        return true;
    }
    if (any_of(nums.begin(), nums.end(), [](int i)
               { return i < 0; }))
    {
        return false;
    }

    vector<int>
        first = nums;
    vector<int> second = nums;

    // 2 choices

    forn(0, n)
    {
        first[i] -= (i + 1);
    }

    bool a = solve(first);

    forn(0, n)
    {
        second[i] -= (n - i + 2);
    }

    bool b = solve(second);

    return a or b;
}

void solve(int tc)
{
    // function<int(int, int)> solve = [&](int i, int j) -> int

    int n;
    cin >> n;

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    bool ans = solve(nums);

    if (ans)
        py else pn
}