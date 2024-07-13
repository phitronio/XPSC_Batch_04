#include<bits/stdc++.h>
#define int long long
#define  ll  long long
#define pii pair<ll,ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9+7;
bool isprime(int x)
{
    if(x <= 1)
        return false;
    if(x == 2 || x == 3)
        return true;
    if(x%2 == 0)
        return false;
    for(int i = 2;i*i<=x;i++)
    {
        if(x % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int x;
    cin>>x;
    int a,b;
    int count = 0;
    if(isprime(x))
        a = x,count++;
    int i = x+1;
    while(true)
    {
        if(count == 2)
            break;
        if(isprime(i))
        {
            if(count == 0)
            {
                a = i;
                count++;
            }
            else if(count == 1)
            {
                b = i;
                count++;
            }
        }
        i++;
    }
    cout<<a*b<<"\n";
    
}
 
int32_t main()
{
    fastread();
    int t = 1;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}