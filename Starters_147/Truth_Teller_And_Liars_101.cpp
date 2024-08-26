#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m >= n)
            cout << -1 << "\n";
        else
        {
            cout << 2 * m + 1 << "\n";
        }
    }
    return 0;
}
