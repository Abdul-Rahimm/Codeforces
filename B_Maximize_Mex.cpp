// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef array<int, 2> ii;
typedef vector<ii> vii;
const int mod = 1e9 + 7;

void solve();

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;

    map<ll, ll> mp;
    for (auto it : v)
    {
        if (mp[it] > 0)
        {
            mp[it % x]++;
        }
        else
            mp[it]++;
    }
    int cnt = 0;

    while (true)
    {
        if (mp[cnt] > 0)
        {
            mp[cnt]--;
            cnt++;
        }
        else if (mp[cnt % x] > 0)
        {
            mp[cnt % x]--;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
}