#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a = 0, b = 0;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                a--;
            if (s[i] == 'R')
                a++;
            if (s[i] == 'U')
                b++;
            if (s[i] == 'D')
                b--;
            int dis = abs(x - a) + abs(y - b);
            if (dis == i + 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
