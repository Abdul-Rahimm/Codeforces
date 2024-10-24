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
    int a, b;
    cin >> a >> b;

    if (a == 0 && b % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (a % 2 == 0 && a != 0)
    {
        cout << "YES" << endl;
        return;
    }
    else
        cout << "NO" << endl;

    // test cases
    // 0 1 --> 2 no
    // 0 3 --> 2 2 2 n
    // 2 0 --> 1 1 yes
    // 2 3 --> 1 1 2 2 2 yes
    // 3 1 --> 1 1 1 2 no
    // 4 5 --> 1 1 1 1 2 2 2 2 2

    // for each two...decrease twice ones
}