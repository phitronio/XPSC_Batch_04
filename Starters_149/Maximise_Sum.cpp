#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            cnt++;
            a[i] = abs(a[i]);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += a[i];
    }

    if (cnt == 0 || cnt % 2 == 0)
    {
        cout << ans << "\n";
    }
    else
    {
        sort(a.begin(), a.end());
        ans -= 2 * a[0];
        cout << ans << "\n";
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}