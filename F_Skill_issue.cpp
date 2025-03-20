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

void solve();
// needs to be done
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
    int n, d;
    cin >> n >> d;
    priority_queue<int> maxheap;
    priority_queue<int, vi, greater<int>> minheap;
    unordered_map<int, int> mp;

    vi nums(n);
    for (int &i : nums)
    {
        cin >> i;
        mp[i]++;
        maxheap.push(i);
        minheap.push(i);
    }

    int count = 0;
    int ans = 0;
    while (count < n)
    {
        if (mp.empty())
            break;

        int high = maxheap.top();
        maxheap.pop();
        count++;
        mp[high]--;
        if (mp[high] == 0)
            mp.erase(high);

        if (mp.empty())
            break;

        int mul = 2;
        while (high * mul <= d)
        {
            mul++;
        }

        mul--; // need these many more
        count += mul;

        if (count > n)
            break;

        forn(0, mul)
        {
            int curr = minheap.top();
            minheap.pop();
            mp[curr]--;
            if (mp[curr] == 0)
                mp.erase(curr);
        }

        if (mp.empty() and count != n)
            break;

        ans++;
    }

    cout << ans;
}