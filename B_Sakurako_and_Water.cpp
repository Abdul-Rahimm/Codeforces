// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define int long long
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

    vector<vector<int>> nums(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> nums[i][j];
        }
    }

    int ans = 0;

    // process the upper triangular area
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = min(temp, nums[i][i]);
    }

    ans += abs(temp);

    temp = 0;
    for (int z = n - 1; z >= 0; z--)
    {
        temp = 0;
        for (int i = 0; i < z; i++)
        {
            temp = min(temp, nums[i][i + n - z]);
        }
        ans += abs(temp);
    }

    for (int z = n - 1; z >= 0; z--)
    {
        temp = 0;
        for (int i = 0; i < z; i++)
        {
            temp = min(temp, nums[i + n - z][i]);
        }
        ans += abs(temp);
    }

    cout << ans << endl;
}