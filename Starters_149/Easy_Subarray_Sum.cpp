#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= 0)
            neg++;
    }
    if (neg == n)
        cout << 0 << "\n";
    else
    {
        int ff = -1;
        int ls = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                ff = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                ls = i;
            }
        }
        neg = 0;
        if (ff == -1 || ls == -1)
        {
            cout << 0 << "\n";
            return;
        }
        for (int i = ff; i <= ls; i++)
        {
            if (a[i] < 0)
                neg++;
        }
        cout << neg << "\n";
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}