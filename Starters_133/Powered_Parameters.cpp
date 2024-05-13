#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int pair_count = 0;
        for (int i = 0; i < n; i++)
        {
            int cur = a[i];
            if (cur == 1)
            {
                pair_count += n;
            }
            else
            {
                int power = 1;
                for (int j = 0; j < n; j++)
                {
                    if (power > 1e9 / cur)
                        break;
                    power *= cur;
                    if (power <= a[j])
                        pair_count++;
                }
            }
        }
        cout << pair_count << "\n";
    }
    return 0;
}