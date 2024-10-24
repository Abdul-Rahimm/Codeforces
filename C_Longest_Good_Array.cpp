// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()

#define int long long

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
long long sumN(int n)
{
    return 1LL * n * (n + 1) / 2;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    int x = r - l;

    auto isValid = [&](int m) -> bool
    {
        return sumN(m - 1) <= x;
    };

    int s = l, e = 1e9, res = l;

    while (s <= e)
    {
        int m = (s + e) / 2;

        bool check = isValid(m);

        if (check)
        {
            res = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    cout << res << endl;
}