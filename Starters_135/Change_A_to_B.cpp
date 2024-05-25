#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int tem = b;
        int c = 0;
        while (tem > a)
        {
            if (tem % k == 0 && tem / k >= a)
                tem /= k, c++;
            else
            {
                if ((tem / k) < a)
                {
                    c += (tem - a);
                    tem -= (tem - a);
                }
                else
                    c += (tem % k), tem -= (tem % k);
                if (tem <= a)
                    break;
            }
        }

        cout << c << "\n";
    }
    return 0;
}