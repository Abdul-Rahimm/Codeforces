// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define pb push_back
#define all(x) x.begin(), x.end()
// #define int long long
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

void DFS(int i, vector<bool> &visited, unordered_map<int, vector<int>> &adj)
{
    visited[i] = true;

    for (int neighbor : adj[i])
    {
        if (visited[neighbor] == false)
            DFS(neighbor, visited, adj);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool status = false;
    vector<bool> visited(n + 1, false);
    vector<vector<int>> roads;
    int count = 0;
    int ans = 0;

    vi huzzi;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            huzzi.push_back(i); // 1 3
            DFS(i, visited, adj);
        }
        else
            continue;
    }

    cout << huzzi.size() - 1 << endl;
    for (int i = 1; i < huzzi.size(); i++)
    {
        cout << huzzi[i - 1] << " " << huzzi[i] << endl;
    }
}