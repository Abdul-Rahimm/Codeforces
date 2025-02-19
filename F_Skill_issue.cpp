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

    vi nums(n);
    for (int &i : nums)
    {
        cin >> i;
        maxheap.push(i);
        minheap.push(i);
    }

    int count = 0;
    int ans = 0;

    while (count < n)
    {
        int high = maxheap.top();
        maxheap.pop();
        count++;

        int mul = 2;
        while (high * mul <= d)
        {
            mul++;
        }
        if (high * mul <= d)
            break;
        mul--; // need these many more
        count += mul;

        while (mul--)
        {
            int curr = minheap.top();
            minheap.pop();
        }

        ans++;
    }

    cout << ans;
}