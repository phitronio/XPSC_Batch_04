#include <bits/stdc++.h>
using namespace std;

int main()
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
        sort(a, a + n);
        int left = 0, right = n - 1;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                sum += a[right];
                right--;
            }
            else
            {
                sum -= a[left];
                left++;
            }
        }
        cout << sum << "\n";
    }
}
