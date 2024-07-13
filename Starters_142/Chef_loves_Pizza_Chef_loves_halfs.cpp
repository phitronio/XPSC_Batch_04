#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int count = 2;
        while (count <= x)
            count *= 2;
        int dif = count - x;
        int ans = x - dif;
        cout << ans << "\n";
    }
    return 0;
}
