// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// Define the indexed set
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
    // cin >> tc;

    while (tc--)
        solve();

    return 0;
}
vector<int> josephus(int n, int k)
{
    indexed_set people;
    vector<int> elimination_order;

    for (int i = 1; i <= n; ++i)
    {
        people.insert(i);
    }

    int index = 0;

    while (!people.empty())
    {
        index = (index + k) % people.size();

        auto it = people.find_by_order(index);
        elimination_order.push_back(*it);
        people.erase(it);
    }

    return elimination_order;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> ans = josephus(n, k);
    for (int i : ans)
        cout << i << " ";
}