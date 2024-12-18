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
    int n;
    cin >> n;

    if (n * (n + 1) % 4 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    vector<int> one, two;
    if (n % 2 == 0)
    {
        int i = 1;
        int j = n;
        int count = 1;

        while (i < j)
        {
            if (count % 2)
            {
                one.push_back(i);
                one.push_back(j);
            }
            else
            {
                two.push_back(i);
                two.push_back(j);
            }
            count++;
            i++;
            j--;
        }
    }
    else
    {
        int i = 4;
        int j = n;
        int count = 1;
        one.push_back(1);
        one.push_back(2);
        two.push_back(3);

        while (i < j)
        {
            if (count % 2)
            {
                one.push_back(i);
                one.push_back(j);
            }
            else
            {
                two.push_back(i);
                two.push_back(j);
            }
            count++;
            i++;
            j--;
        }
    }

    cout << one.size() << endl;
    for (int i : one)
        cout << i << " ";
    cout << endl;
    cout << two.size() << endl;

    for (int i : two)
        cout << i << " ";
}
