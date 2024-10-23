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
    // cin >> tc;

    while (tc--)
        solve();

    return 0;
}
double price(double k, double p, double a, double b, double c, double d)
{
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

void solve()
{
    double p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    vector<double> nums(n);

    for (int i = 0; i < n; i++)
    {
        nums[i] = price(double(i), p, a, b, c, d);
    }

    double mx = nums[0];
    double ans = 0.0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, mx - nums[i]);

        mx = max(mx, nums[i]);
    }

    cout << fixed << setprecision(9) << ans;
}