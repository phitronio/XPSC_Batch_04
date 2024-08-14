#include <bits/stdc++.h>
using namespace std;

const int maxN = (1 << 17) + 9;
int a[maxN], t[maxN * 4];

int merge(int ans_l, int ans_r, int len) {
   int pw = 0;
   pw = __lg(len);
   if (pw % 2 != 0) {
      return (ans_l | ans_r);
   }
   else {
      return (ans_l ^ ans_r);
   }
}

void build(int n, int b, int e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = merge(t[l], t[r], e - b + 1);
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
   t[n] = merge(t[l], t[r], e - b + 1);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int n, q;
   cin >> n >> q;
   n = (1 << n);
   for (int i = 1; i <= n; i++) {
      cin >> a[i];
   }
   build(1, 1, n);
   while (q--) {
      int i, x;
      cin >> i >> x;
      update(1, 1, n, i, x);
      cout << t[1] << '\n';
   }
   return 0;
}
