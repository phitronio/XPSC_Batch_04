#include <bits/stdc++.h>
using namespace std;
const int  maxN = 1e5 + 9, inf = 1e9 + 9;
int a[maxN], t[maxN * 4];

void build(int n, int b, int e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = min(t[l], t[r]); // change this
}

void update(int n, int b, int e, int i, int v) {
   if (i<b || i>e) {
      return;
   }
   if (b == e) {
      t[n] = v;
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   update(l, b, mid, i, v);
   update(r, mid + 1, e, i, v);
   t[n] = min(t[l], t[r]);  // change this
}

int query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return inf; // return right value
   }
   if (b >= i && e <= j) {
      return t[n];
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   int n, m;
   cin >> n >> m;
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
   }

   build(1, 1, n);
   while (m--) {
      int t;
      cin >> t;
      if (t == 1) {
         int idx, v;
         cin >> idx >> v;
         idx++;
         update(1, 1, n, idx, v);
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