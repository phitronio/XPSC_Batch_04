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
        int total_a = 0, cur_a = 0, b = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                cur_a++;
            else if (s[i] == 'b')
            {
                total_a += cur_a;
                b = 1;
                cur_a = 0;
            }
            else
            {
                if (b == 1)
                {
                    if (total_a == 0)
                    {
                        b = 0;
                        continue;
                    }
                    else
                    {
                        ans++;
                        total_a--;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}