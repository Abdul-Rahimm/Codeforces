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
#define int long long
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
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int &i : nums)
        cin >> i;

    sort(all(nums));

    int substract = 0;
    int answer = k;

    for (int i = 0; i < n; i++)
    {
        nums[i] -= substract;

        k -= min(k, (n - i) * nums[i]);

        if (k == 0)
            break;
        else
            answer++;

        substract += nums[i];
    }

    cout << answer << endl;
}