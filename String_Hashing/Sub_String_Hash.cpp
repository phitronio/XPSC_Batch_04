#include <bits/stdc++.h>
using namespace std;

const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
const int N = 1e6 + 9;

int power(long long x, long long n, int MOD) { // O(logn)
   int ans = 1 % MOD;
   while (n > 0) {
      if (n & 1) {
         ans = 1LL * ans * x % MOD;
      }
      x = 1LL * x * x % MOD;
      n >>= 1;
   }
   return ans;
}

pair<int, int> pw[N], ipw[N];

void prec() { // O(n)
   pw[0] = { 1,1 };
   for (int i = 1;i < N;i++) {
      pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
      pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
   }
   int ip1 = power(p1, mod1 - 2, mod1);
   int ip2 = power(p2, mod2 - 2, mod2);
   ipw[0] = { 1,1 };
   for (int i = 1;i < N;i++) {
      ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
      ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
   }
}

pair<int, int> string_hash(string s) { // O(n)
   int n = s.size();
   pair<int, int> hs({ 0,0 });
   for (int i = 0;i < n;i++) {
      hs.first = (hs.first % mod1 + 1LL * s[i] * pw[i].first % mod1) % mod1;
      hs.second = (hs.second % mod2 + 1LL * s[i] * pw[i].second % mod2) % mod2;
   }
   return hs;
}

pair<int, int> pref[N];
void build(string s) { // O(n)
   int n = s.size();
   for (int i = 0;i < n;i++) {
      pref[i].first = 1LL * s[i] * pw[i].first % mod1;
      if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
      pref[i].second = 1LL * s[i] * pw[i].second % mod2;
      if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
   }
}

pair<int, int> get_hash(int i, int j) { // O(1)
   pair<int, int> hs({ 0,0 });
   hs.first = pref[j].first;
   if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
   hs.first = 1LL * hs.first * ipw[i].first % mod1;

   hs.second = pref[j].second;
   if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
   hs.second = 1LL * hs.second * ipw[i].second % mod2;

   return hs;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   prec();
   string a, b;
   cin >> a;
   cin >> b;
   build(a);

   auto hs = string_hash(b);
   int ans = 0, n = a.size(), m = b.size();
   for (int i = 0;i + m - 1 < n;i++) {
      if (hs == get_hash(i, i + m - 1)) {
         ans++;
      }
   }

   cout << ans << '\n';

   return 0;
}