#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int same = 0;
    int not_same = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            same++;
        else
            not_same++;
    }
    int ans = (not_same * (not_same - 1)) / 2;
    ans += (same * not_same);
    cout << ans << "\n";
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
