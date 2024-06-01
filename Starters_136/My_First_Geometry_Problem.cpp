#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    if (s[0] == '1')
    {
        cnt += 11;
        if (s[1] == '1')
            cnt += 10;
        if (s[2] == '1')
        {
            if (s[3] == '1')
                cnt *= 21;
            else
                cnt *= 11;
        }
        else if (s[3] == '1')
            cnt *= 11;
    }
    else if (s[1] == '1')
    {
        cnt += 11;
        if (s[2] == '1')
        {
            if (s[3] == '1')
                cnt *= 21;
            else
                cnt *= 11;
        }
        else if (s[3] == '1')
            cnt *= 11;
    }
    else if (s[2] == '1')
    {
        cnt += 11;
        if (s[3] == '1')
            cnt += 10;
    }
    else if (s[3] == '1')
    {
        cnt += 11;
    }
    // cnt++;
    cout << cnt << "\n";
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