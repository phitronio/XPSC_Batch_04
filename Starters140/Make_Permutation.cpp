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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        bool flag = true;
        int current = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == current)
                current++;
            else
            {
                if (a[i] > current)
                {
                    flag = false;
                    break;
                }
                current++;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
