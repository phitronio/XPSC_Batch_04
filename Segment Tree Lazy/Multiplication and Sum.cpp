#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 9, MOD = 1e9 + 7;;
long long a[maxN], t[maxN * 4], lazy[maxN * 4];

void push(int n, int b, int e) {
   if (lazy[n] == 1) {
      return;
   }

   t[n] = (1LL * t[n] * lazy[n]) % MOD;
   if (b != e) {
      int l = (2 * n), r = (2 * n) + 1;
      lazy[l] = (1LL * lazy[l] * lazy[n]) % MOD;
      lazy[r] = (1LL * lazy[r] * lazy[n]) % MOD;
   }
   lazy[n] = 1;
}

long long merge(long long l, long long r) {
   return (l + r) % MOD;
}

void build(int n, int b, int e) {
   lazy[n] = 1;
   if (b == e) {
      t[n] = 1;
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int j, int v) {
   push(n, b, e);
   if (e < i || j < b) {
      return;
   }
   if (b >= i && e <= j) {
      lazy[n] = v;
      push(n, b, e);
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   update(l, b, mid, i, j, v);
   update(r, mid + 1, e, i, j, v);
   t[n] = merge(t[l], t[r]);
}

long long query(int n, int b, int e, int i, int j) {
   push(n, b, e);
   if (e < i || j < b) {
      return 0;
   }
   if (b >= i && e <= j) {
      return t[n];
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int n, m;
   cin >> n >> m;
   build(1, 1, n);
   while (m--) {
      int t;
      cin >> t;
      if (t == 1) {
         int l, r, v;
         cin >> l >> r >> v;
         l++;
         update(1, 1, n, l, r, v);
      }
      else {
         int l, r;
         cin >> l >> r;
         l++;
         cout << query(1, 1, n, l, r) << '\n';
      }
   }
   return 0;
}