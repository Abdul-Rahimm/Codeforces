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

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    vector<int> LR(n), RL(n);
    LR[0] = nums[0] == 2 ? 1 : 0;

    forn(1, n)
    {
        LR[i] = LR[i - 1] + (nums[i] == 2);
    }

    RL[n - 1] = nums[n - 1] == 2 ? 1 : 0;
    for (int i = n - 2; i >= 0; i--)
    {
        RL[i] = RL[i + 1] + (nums[i] == 2);
    }

    forn(0, n - 1)
    {
        if (LR[i] == RL[i + 1])
        {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}