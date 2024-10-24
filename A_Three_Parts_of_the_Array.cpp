// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
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
    // cin >> tc;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a)
        cin >> x;

    int l = 0;
    int r = a.size() - 1;

    vi prefixSumLeft(n, 0), prefixSumRight(n, 0);

    for (int i = 0, j = r; i < n; i++, j--)
    {
        prefixSumLeft[i] = (i > 0) ? prefixSumLeft[i - 1] + a[i] : a[i];
        prefixSumRight[j] = (j < n - 1) ? prefixSumRight[j + 1] + a[j] : a[j];
    }

    int sum = 0;
    int leftsum = a[l];
    int rightsum = a[r];

    while (r < l)
    {
    }
}