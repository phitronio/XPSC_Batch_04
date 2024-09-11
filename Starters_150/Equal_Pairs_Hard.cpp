#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    // vector<int>a(n,0);
    map<int, int> mp;
    int mx = -1;
    int total_pairs = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        total_pairs -= (mp[y] * (mp[y] - 1)) / 2;
        mp[y]++;
        total_pairs += (mp[y] * (mp[y] - 1)) / 2;
        mx = max(mx, mp[y]);
        int zero = n;
        int ans = total_pairs + ((zero * (zero - 1)) / 2) + (zero * mx);
        cout << ans << " ";
    }
    cout << "\n";
}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}