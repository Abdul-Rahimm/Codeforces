// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define int long long
#define nl cout << "\n";
#define yesno(b) cout << ((b) ? "YES" : "NO");
#define forn(a, b) for (int i = a; i < b; i++)
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
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;

    auto is_1100 = [&](int index) -> bool
    {
        return index >= 0 && index + 4 <= n && s.substr(index, 4) == "1100";
    };

    for (int i = 0; i < n; i++)
    {
        count += is_1100(i);
    }

    int q;
    cin >> q;

    for (int x = 0; x < q; x++)
    {
        int index;
        char v;

        cin >> index >> v;
        index--;

        for (int i = index - 3; i <= index; i++)
        {
            count -= is_1100(i);
        }

        s[index] = v;

        for (int i = index - 3; i <= index; i++)
        {
            count += is_1100(i);
        }

        yesno(count > 0);
        nl;
    }
}