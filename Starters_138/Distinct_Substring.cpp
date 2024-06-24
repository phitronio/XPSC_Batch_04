#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        int len = 1;
        int src = 1;
        while (len <= n)
        {
            count++;
            len += src + 2;
            src++;
        }
        if (count >= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
