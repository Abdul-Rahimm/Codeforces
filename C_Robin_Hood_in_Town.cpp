// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
// #define for(n) for(int i = 0; i < n ; i++)
// #define rev(n) for(int i = n; i >= 0 ; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define p1 cout << "-1\n";
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vii;
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
    int n;
    cin >> n;

    vl nums(n);
    ll total = 0;
    for (ll &i : nums)
    {
        cin >> i;
        total += i;
    }
    sort(all(nums));
    double avg = (total / double(nums.size())) / 2.0;

    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }

    int mid = (n) / 2;

    if (nums[mid] < avg)
    {
        cout << 0 << endl;
        return;
    }

    ll x = (nums.size() * 2 * nums[mid]) + 1;

    cout << x - total << endl;
}