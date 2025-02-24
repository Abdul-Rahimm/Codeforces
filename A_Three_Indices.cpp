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
    priority_queue<pair<int, int>> pq;

    int index = 0;
    for (int &i : nums)
    {
        cin >> i;
        pq.push({i, index});
        index++;
    }

    while (!pq.empty())
    {
        int currHigh = pq.top().first;
        index = pq.top().second;
        pq.pop();

        int behind = -1;
        int ahead = -1;

        int i = index;

        while (i - 1 >= 0)
        {
            if (nums[i - 1] < currHigh)
            {
                behind = i - 1;
                break;
            }
            i--;
        }

        i = index;

        while (i + 1 < n)
        {
            if (nums[i + 1] < currHigh)
            {
                ahead = i + 1;
                break;
            }
            i++;
        }

        if (ahead != -1 and behind != -1)
        {
            py
                    cout
                << behind + 1 << " " << index + 1 << " " << ahead + 1 << endl;
            return;
        }
    }

    cout << "NO" << endl;
}