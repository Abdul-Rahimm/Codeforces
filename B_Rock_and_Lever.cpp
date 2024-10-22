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
    int n;
    cin >> n;

    vl nums(n);
    for (ll &i : nums)
        cin >> i;

    bool status = true;
    ll bitmask = 1;
    ll count = 0;
    while (status)
    {
        status = false;
        bool isTrue = false;
        ll currentCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
                status = true;

            // left shifting and compring with bitmask
            if (nums[i] & bitmask == 1 && nums[i] == 1)
            {
                if (!isTrue)
                    isTrue = true;
                else
                {
                    currentCount++;
                    count += currentCount;
                }
            }
            nums[i] = nums[i] >> 1;
        }
    }

    cout << count << endl;
}