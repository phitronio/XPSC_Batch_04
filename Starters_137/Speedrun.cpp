#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> h[i];

        int time_spent = 0;
        bool failed = false;
        bool pass = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= time_spent + h[i])
            {
                time_spent += h[i];
                continue;
            }
            if (failed)
            {
                pass = false;
                break;
            }
            int j = i;
            while (j < n && (a[j] - a[i]) <= 2 * k)
            {
                j++;
            }
            i--;
            j--;

            while (i >= 0 && (a[j] - a[i]) <= 2 * k)
            {
                time_spent -= h[i];
                i--;
            }
            i = j;
            failed = true;
        }
        if (pass)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}