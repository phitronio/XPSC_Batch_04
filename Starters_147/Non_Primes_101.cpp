#include <bits/stdc++.h>
#define int long long
#define ll long long
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
vector<bool> primes;
vector<bool> sieve(ll n)
{
    ll *arr = new ll[n + 1]();
    vector<bool> vect(n + 1);
    for (ll i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect[i] = true;
            for (ll j = 2 * i; j <= n; j += i)
                arr[j] = 1, vect[j] = false;
        }
    return vect;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    bool flag = false;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = i; j <= 100; j++)
        {
            int sum = i + j;
            if (!primes[sum])
            {
                int first = -1, second = -1;
                for (int x = 0; x < n; x++)
                {
                    if (a[x] == i)
                    {
                        first = x + 1;
                        break;
                    }
                }
                for (int x = 0; x < n; x++)
                {
                    if (a[x] == j && x + 1 != first)
                    {
                        second = x + 1;
                        break;
                    }
                }
                if (first != -1 && second != -1)
                {
                    cout << first << " " << second << "\n";
                    return;
                }
            }
        }
    }
    cout << -1 << "\n";
}

int32_t main()
{
    fastread();
    primes = sieve(201);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}