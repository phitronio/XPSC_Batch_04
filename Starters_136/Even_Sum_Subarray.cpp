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
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int ans = n;
    if (sum % 2 == 0)
    {
        cout << ans << "\n";
        return;
    }
    int i = 0, j = n - 1;
    int close = 0;
    while (i <= j)
    {
        if ((a[i] % 2 != 0) || (a[j] % 2 != 0))
        {
            close = min(i + 1, n - j);
            break;
        }
        i++;
        j--;
    }
    ans -= close;
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