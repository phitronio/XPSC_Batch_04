#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin >> n;
   int ans = 1;
   for (int i = 2;i <= n;i++) {
      ans = (1LL * ans % MOD * i % MOD) % MOD;
   }

   cout << ans << '\n';

   // ans = 1;
   // ans = (1%MOD*2%MOD)%MOD
   // ans = (2%MOD*3%MOD)%MOD;
   // ans = (6%MOD*4%MOD)%MOD;
   return 0;
}