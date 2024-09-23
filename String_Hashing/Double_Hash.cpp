#include <bits/stdc++.h>
using namespace std;

const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
const int N = 1e5 + 9;

int pw1[N], pw2[N];

void prec() { // O(n)
   pw1[0] = 1;
   for (int i = 1;i < N;i++) {
      pw1[i] = 1LL * pw1[i - 1] * p1 % mod1;
   }
   pw2[0] = 1;
   for (int i = 1;i < N;i++) {
      pw2[i] = 1LL * pw2[i - 1] * p2 % mod2;
   }
}

pair<int, int> get_hash(string s) { // O(n)
   int n = s.size();
   int hs1 = 0, hs2 = 0;
   for (int i = 0;i < n;i++) {
      hs1 += 1LL * s[i] * pw1[i] % mod1;
      hs1 %= mod1;
   }
   for (int i = 0;i < n;i++) {
      hs2 += 1LL * s[i] * pw2[i] % mod2;
      hs2 %= mod2;
   }
   return { hs1,hs2 };
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   prec();

   string a, b;
   cin >> a >> b;
   if (get_hash(a) == get_hash(b)) {
      cout << "YES" << '\n';
   }
   else {
      cout << "NO" << '\n';
   }
   return 0;
}