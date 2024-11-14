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
int n = 21;
vector<int> factos(n);

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);

    return 0;
}

void solve(int i)
{
    int num;
    cin >> num;
    string s = "impossible";

    factos[0] = 1;
    factos[1] = 1;
    for (int i = 2; i < n; i++)
    {
        factos[i] = factos[i - 1] * i;
    }
    cout << "Case " << i << ": ";

    unordered_set<int> st;
    vi nums; // to store all factorials. reason is input format.
    while (num > 0)
    {
        int index = lower_bound(factos.begin(), factos.end(), num) - factos.begin();
        if (st.count(index) || factos[index] != num)
            index--;
        index = max(0ll, index); // index should be postive na

        st.insert(index);
        nums.push_back(index);
        num -= factos[index];
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            cout << s << endl;
            return;
        }
    }

    reverse(all(nums));
    for (int i = 0; i < nums.size() - 1; i++)
        cout << nums[i] << "!+";

    cout << nums[nums.size() - 1] << "!";

    cout << endl;
}