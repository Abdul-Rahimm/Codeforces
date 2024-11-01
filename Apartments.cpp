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
    // cin >> tc;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vi applicant(n);
    for (int &i : applicant)
        cin >> i;

    vi apartment(m);
    for (int &i : apartment)
        cin >> i;

    sort(all(applicant));
    sort(all(apartment));

    int i = 0;
    int j = 0;
    int ans = 0;

    while (i < applicant.size() && j < apartment.size())
    {
        if (abs(applicant[i] - apartment[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            if (applicant[i] < apartment[j])
                i++;
            else
                j++;
        }
    }

    cout << ans << endl;
}