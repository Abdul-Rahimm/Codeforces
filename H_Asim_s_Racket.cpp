// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
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
    // a b c d e f
    // v  w  x  y  z  a
    string s;
    vector<char> chars;
    for (int i = 0; i < 5; i++)
    {
        char x = char('V' + i);
        chars.push_back(x);
    }
    for (int i = 0; i <= 20; i++)
    {
        char x = char('A' + i);
        chars.push_back(x);
    }

    // for (char i : chars)
    //     cout << i << " ";

    do
    {
        cin >> s;

        if (s == "START")
            continue;
        if (s == "END")
        {
            cout << endl;
            continue;
        }
        if (s == "ENDOFINPUT")
            break;

        stringstream obj(s);
        string temp;

        while (obj >> temp)
        {
            for (char i : temp)
            {
                if (!isalpha(i))
                    cout << i;
                else
                {
                    // cout << (i - 'A') << " ";
                    cout << chars[i - 'A'];
                }
            }
            cout << " ";
        }

    } while (s != "ENDOFINPUT");

    int n = s.size();
}