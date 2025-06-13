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

    map<int, int> mp, mp2;
    int ans = 0;

    vi nums(n);
    for (int &i : nums)
    {
        cin >> i;
    }

    vi nums2(n);
    for (int &i : nums2)
    {
        cin >> i;
    }

    forn(0, n)
    {
        int count = 1;
        int j = i + 1;
        int number = nums[i];
        while (j < n and nums[j] == number)
        {
            ++count;
            ++j;
        }
        i = j - 1;

        mp[number] = max(mp[number], count);
        ans = max(ans, mp[number]);
    }

    forn(0, n)
    {
        int count = 1;
        int j = i + 1;
        int number = nums2[i];
        while (j < n and nums2[j] == number)
        {
            ++count;
            ++j;
        }
        i = j - 1;

        mp2[number] = max(mp2[number], count);
        ans = max(ans, mp2[number]);
    }

    for (auto row : mp)
    {
        int val = row.first;
        int freq = row.second;

        int freqFromOther = mp2[val];
        ans = max(ans, freq + freqFromOther);
    }

    cout << ans << endl;

    // 2 2 3 3 3
    // 2 2 1 1 1
}