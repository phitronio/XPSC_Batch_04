#include <bits/stdc++.h>
// #define int long long
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll o = 0;
    vector<ll> bits(33, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];
        o |= x;
        for (ll j = 0; j <= 32; j++)
        {
            if (x & (1 << j))
            {
                bits[j]++;
            }
        }
    }
    if (o & (o + 1) == 0)
    {
        cout << 0 << "\n";
        return;
    }
    ll ans = 0;
    ll msb = 0;
    for (ll i = 0; i <= 32; i++)
    {
        if (bits[i] == 0)
        {
            msb = i;
            break;
        }
    }
    ll mx = (1 << msb);
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= mx)
            ans++;
       
    }
    cout << ans << "\n";
}

int main()
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