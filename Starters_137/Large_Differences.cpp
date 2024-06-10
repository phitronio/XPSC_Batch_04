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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum1 = 0;
        vector<int> diff;
        // set 1 in every index individually
        for (int i = 0; i < n; i++)
        {
            diff = a;
            diff[i] = 1;
            int sum = 0;
            for (int j = 0; j < n - 1; j++)
            {
                sum += abs(diff[j] - diff[j + 1]);
            }
            sum1 = max(sum1, sum);
        }
        int sum2 = 0;

        // set k in every index individually
        for (int i = 0; i < n; i++)
        {
            diff = a;
            diff[i] = k;
            int sum = 0;
            for (int j = 0; j < n - 1; j++)
            {
                sum += abs(diff[j] - diff[j + 1]);
            }
            sum2 = max(sum2, sum);
        }
        cout << max(sum1, sum2) << "\n";
    }
    return 0;
}