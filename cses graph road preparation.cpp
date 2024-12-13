// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
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
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<array<int, 2>>> mp;
    priority_queue<array<int, 3>, vector<array<int, 3>>, greater<array<int, 3>>> pq;

    for (int i = 0; i < m; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;

        mp[a].push_back({b, cost});
        pq.push({cost, a, b});
        // mp[b].push_back({a, cost});
    }

    vector<bool> vis(n + 1, false);
    int score = 0;
    int count = 0;

    while (!pq.empty())
    {
        array<int, 3> curr = pq.top();
        pq.pop();

        int a = curr[1];
        int b = curr[2];
        int cost = curr[0];

        if (vis[a] && vis[b])
            continue;
        count++;

        if (!vis[a])
        {
            vis[a] = true;
        }

        if (!vis[b])
        {
            vis[b] = true;
        }

        score += cost;
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            cout << "IMPOSSIBLE";
        return;
    }

    cout << score;
}