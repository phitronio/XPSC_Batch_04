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
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    int mx = INT_MIN;
    int mx_num = -1;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] > 0)
        {
            if (mp[i] > mx)
            {
                mx_num = i;
                mx = mp[i];
            }
        }
    }
    if (mx_num != -1)
    {
        int tem = mp[mx_num] + mp[0];
        ans = (tem * (tem - 1) / 2);
        for (int i = 1; i <= n; i++)
        {
            if (i == mx_num)
                continue;
            ans += ((mp[i] * (mp[i] - 1)) / 2);
        }
    }
    else
    {
        ans = (mp[0] * (mp[0] - 1)) / 2;
    }
    cout << ans << "\n";
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