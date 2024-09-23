#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int power(long long x, long long n, int MOD) {
   int ans = 1 % MOD;
   while (n > 0) {
      if (n & 1) {
         ans = 1LL * ans * x % MOD;
      }
      x = 1LL * x * x % MOD; // 3^(2^0) -> 3^(2^1) -> 3^(2^2) -> 3^(2^3)
      n >>= 1;
   }
   return ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   while (t--) {
      int x, n;
      cin >> x >> n;
      cout << power(x, n, MOD) << '\n';
   }
   return 0;
}