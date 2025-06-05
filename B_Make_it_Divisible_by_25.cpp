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

void solve(int i);

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);

    return 0;
}

void solve(int tc)
{
    // function<int(int, int)> solve = [&](int i, int j) -> int

    int n;
    cin >> n;

    if (n % 25 == 0)
    {
        cout << 0 << endl;
        return;
    }

    string num = to_string(n);

    // check for 25 50 75 and 00
    int sz = num.size();
    int ans = INT_MAX;
    int curr = 0;

    // for 25
    bool five = false;
    bool two = false;
    for (int i = sz - 1; i >= 0; i--)
    {
        if (!five and num[i] == '5')
        {
            five = true;
            continue;
        }
        else if (!five)
            curr++;

        if (!five)
            continue;

        if (num[i] == '2')
        {
            two = true;
            break;
        }
        else
            curr++;
    }

    if (five and two)
        ans = min(ans, curr);

    curr = 0;
    // for 50
    bool zero = false;
    five = false;
    for (int i = sz - 1; i >= 0; i--)
    {
        if (!zero and num[i] == '0')
        {
            zero = true;
            continue;
        }
        else if (!zero)
            curr++;

        if (!zero)
            continue;

        if (num[i] == '5')
        {
            five = true;
            break;
        }
        else
            curr++;
    }
    if (five and zero)
        ans = min(ans, curr);

    curr = 0;
    // for 75
    five = false;
    bool seven = false;
    for (int i = sz - 1; i >= 0; i--)
    {
        if (!five and num[i] == '5')
        {
            five = true;
            continue;
        }
        else if (!five)
            curr++;

        if (!five)
            continue;

        if (num[i] == '7')
        {
            seven = true;
            break;
        }
        else
            curr++;
    }

    if (five and seven)
        ans = min(ans, curr);

    curr = 0;
    // for 00
    bool first = false;
    bool second = false;
    for (int i = sz - 1; i >= 0; i--)
    {
        if (!first and num[i] == '0')
        {
            first = true;
            continue;
        }
        else if (!first)
            curr++;

        if (!first)
            continue;

        if (num[i] == '0')
        {
            second = true;
            break;
        }
        else
            curr++;
    }

    if (first and second)
        ans = min(ans, curr);

    cout << ans << endl;
}