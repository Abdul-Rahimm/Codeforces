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

    vi nums(n - 2);
    for (int &i : nums)
        cin >> i;

    vi nums2(n);
    for (int i = 0; i < n; i++)
        nums2[i] = i + 2;

    for (int i = 1; i <= n - 2; i++)
    {
        // rmr to i-1

        if (nums[i - 1] == 1)
        {
            nums2[i] = 1;
            nums2[i + 1] = 1;
            nums2[i - 1] = 1;
        }
    }

    // for (int i : nums)
    //     cout << i << " ";
    // nl;
    // for (int i : nums2)
    //     cout << i << " ";
    // nl;

    for (int i = 1; i <= n - 2; i++)
    {
        int curr = nums[i - 1];

        if (curr == 1)
        {
            // cout << nums2[i - 1] << " " << nums2[i] << " " << nums2[i + 1] << endl;
            if (nums2[i - 1] != 1 or nums2[i - 1] != nums2[i] or nums2[i] != nums2[i + 1])
            {
                pn;
                return;
            }
        }
        if (curr == 0)
        {
            if (nums2[i - 1] == nums2[i] and nums2[i] == nums2[i + 1])
            {
                pn;
                return;
            }
        }
    }

    py;
}