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
        if (n & 1)
        {
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i << " ";
            }
            cout << n << "\n";
        }
        else
        {
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
