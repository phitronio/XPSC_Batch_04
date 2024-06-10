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
        vector<int> x(n);
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];

        for (int i = 0; i < n; i++)
            cin >> p[i];

        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for (int i = 1; i < n; i++)
        {
            if ((x[i] - p[i]) <= x[i - 1])
                left[i] = left[i - 1] + 1;
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if ((x[i] + p[i]) >= x[i + 1])
                right[i] = right[i + 1] + 1;
        }
        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                int current_power = right[i] + 1;
                if (current_power == n || (current_power + 1 + right[i + current_power] == n))
                {
                    possible = true;
                    break;
                }
            }
            else if (i == n - 1)
            {
                int current_power = left[i] + 1;
                if (current_power == n || (current_power + 1 + left[i - 1 - left[i]] == n))
                {
                    possible = true;
                    break;
                }
            }
            else if (2 + left[i] + right[i + 1] == n)
            {
                possible = true;
                break;
            }
        }
        if (2 + right[0] + left[n - 1] >= n)
            possible = true;
        if (2 + right[1] == n)
            possible = true;

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}