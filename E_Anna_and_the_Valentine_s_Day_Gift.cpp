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

    int n, m;
    cin >> n >> m;

    vi nums(n);
    priority_queue<pair<int, int>> pq;

    for (int &i : nums)
    {
        cin >> i;

        int copy = i; // copy of original number
        int countLeadingZeros = 0;
        int digits = 0;
        bool status = true;

        while (copy > 0)
        {
            digits++;
            if (copy % 10 != 0)
                status = false; // add no more leading zeros

            countLeadingZeros += status;
            copy /= 10;
        }
        pq.push({countLeadingZeros, digits});
    }

    int ans = 0;
    while (!pq.empty())
    {
        // anna turn
        int totalDigits = pq.top().second;
        int zeroes = pq.top().first;
        pq.pop();

        ans += totalDigits - zeroes; // anna took most number of leading 0s

        // sasha turn
        if (!pq.empty())
        {
            ans += pq.top().second;
            pq.pop();
        }
    }

    if (ans >= m + 1)
    {
        cout << "Sasha" << endl;
    }
    else
    {
        cout << "Anna" << endl;
    }
}