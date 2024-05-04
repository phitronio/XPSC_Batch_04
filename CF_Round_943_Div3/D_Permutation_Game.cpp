#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace std;
const int mod = 1e9 + 7;
void solve()
{
    int n, k, src1, src2;
    cin >> n >> k >> src1 >> src2;
    vector<int>p(n + 1);
    vector<int>a(n + 1);

    for (int i = 1;i <= n;i++)
        cin >> p[i];

    for (int i = 1;i <= n;i++)
        cin >> a[i];
    int shuru1 = a[src1];
    int shuru2 = a[src2];

    vector<int>kothai1;

    kothai1.push_back(src1);
    int ekhon = src1;
    int pore = p[src1];
    while (pore != src1)
    {
        kothai1.push_back(pore);
        ekhon = pore;
        pore = p[ekhon];
    }

    vector<int>kothai2;

    kothai2.push_back(src2);
    int ekhon1 = src2;
    int pore1 = p[src2];
    while (pore1 != src2)
    {
        kothai2.push_back(pore1);
        ekhon1 = pore1;
        pore1 = p[ekhon1];
    }

    int age = 0;

    for (int i = 0;i < kothai1.size();i++)
    {
        if (k < i + 1)
            break;
        int cur = age;
        cur += (k - i) * a[kothai1[i]];
        shuru1 = max(shuru1, cur);
        age += a[kothai1[i]];
    }
    int age1 = 0;

    for (int i = 0;i < kothai2.size();i++)
    {
        if (k < i + 1)
            break;
        int cur = age1;
        cur += (k - i) * a[kothai2[i]];
        shuru2 = max(shuru2, cur);
        age1 += a[kothai2[i]];
    }
    if (shuru1 > shuru2)
        cout << "Bodya\n";
    else if (shuru1 == shuru2)
        cout << "Draw\n";
    else
        cout << "Sasha\n";



}

int32_t main()
{
    fastread();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}