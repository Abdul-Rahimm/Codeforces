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

    int n, q;
    cin >> n >> q;

    vector<int> nums(n);
    vector<int> prefixSum(1, 0);
    int sum = 0;
    for (int &i : nums)
    {
        cin >> i;
        sum += i;
        prefixSum.push_back(sum);
    }

    forn(0, q)
    {
        int l, r, k;
        cin >> l >> r >> k;
        l--;
        r--;

        int currSum = prefixSum[r + 1] - prefixSum[l];
        int newSum = (r - l + 1) * k;

        int diff = abs(currSum - newSum);

        if ((diff + prefixSum[n]) % 2 == 1)
        {
            py
        }
        else
            pn
    }
}