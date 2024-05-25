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
        string s;
        cin >> s;
        int c1 = 0;
        int c0 = 0;
        if (s[0] == '0')
            c0++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0' && s[i - 1] == '1')
                c0++;
        }
        if (s[0] == '1')
            c1++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i - 1] == '0')
                c1++;
        }
        cout << min(c0, c1) << "\n";
    }
    return 0;
}