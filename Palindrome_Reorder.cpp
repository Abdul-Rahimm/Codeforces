// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define pb push_back
#define all(x) x.begin(), x.end()
#define int long long
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define forn(a, b) for (int i = a; i < b; i++)
#define nl cout << endl;
#define pii pair<int, int>
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
const int mod = 1e9 + 7;

void solve();

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;

    while (tc--)
        solve();

    return 0;
}

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int i = 0;
    int j = n - 1;

    int oddCount = 0;

    map<char, int> mp;

    for (char i : s)
        mp[i]++;

    for (auto row : mp)
    {
        if (row.second % 2 == 1)
            oddCount++;
    }

    if (oddCount > 1 || (n % 2 == 1 && oddCount == 0) || (n % 2 == 0 && oddCount == 1))
    {
        cout << "NO SOLUTION";
        return;
    }

    for (auto row : mp)
    {
        char curr = row.first;
        int occur = row.second;

        while (occur > 1)
        {
            s[i] = curr;
            s[j] = curr;
            occur -= 2;
            i++;
            j--;
        }

        if (occur > 0)
            s[(i + j) / 2] = curr;
    }

    cout << s;
}