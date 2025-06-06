// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define int long long
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

    vi nums(n);
    for (int &i : nums)
        cin >> i;

    unordered_set<int> st;
    st.insert(nums[0]);

    for (int i = 1; i < n; i++)
    {
        if (st.find(nums[i] + 1) != st.end() || st.find(nums[i] - 1) != st.end())
        {
            st.insert(nums[i]);
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}