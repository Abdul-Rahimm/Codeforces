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
    vi a(n);
    for (auto &x : a)
        cin >> x;

    unordered_set<int> st(all(a));
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        bool status = false;
        if (st.size() > 26)
        {
            status = true;
        }

        unordered_map<char, int> mp;
        if (s.size() != n)
        {
            status = true;
        }

        for (int i = 0; i < s.size() && !status; i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                if (mp[s[i]] != a[i])
                {
                    status = true;
                    break;
                }
            }
            mp[s[i]] = a[i];
        }

        if (!status)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}