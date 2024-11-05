// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
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
vector<int> josephus(int n)
{
    vector<int> people(n);
    vector<int> elimination_order;

    for (int i = 0; i < n; ++i)
    {
        people[i] = i + 1;
    }

    int index = 0;

    while (!people.empty())
    {
        index = (index + 1) % people.size();
        elimination_order.push_back(people[index]);
        people.erase(people.begin() + index);
    }

    return elimination_order;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> ans = josephus(n);
    for (int i : ans)
        cout << i << " ";
}