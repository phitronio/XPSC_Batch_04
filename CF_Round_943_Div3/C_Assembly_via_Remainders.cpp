#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int>x(n - 1);
    for (int i = 0;i < n - 1;i++)
        cin >> x[i];
    vector<int>a(n);
    int mx = 1e9;
    a[n - 1] = x[n - 2];
    a[n - 2] = mx;
    for (int i = n - 3;i >= 0;i--)
    {
        mx -= x[i];
        a[i] = mx;
    }
    for (int i = 0;i < n;i++)
        cout << a[i] << " ";
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