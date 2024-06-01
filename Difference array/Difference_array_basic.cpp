// 5 3
// 2 5 1 8 13
// 1 3 4
// 2 5 7
// 1 5 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    vector<int> d(n + 2);
    for (int i = 1;i <= q;i++) {
        int l, r, x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;
    }

    // for (int i = 0;i <= n + 1;i++) {
    //     cout << d[i] << " ";
    // }
    // cout << '\n';
    for (int i = 1;i <= n;i++) {
        d[i] = d[i - 1] + d[i];
    }
    // for (int i = 0;i <= n + 1;i++) {
    //     cout << d[i] << " ";
    // }
    // cout << '\n';
    for (int i = 1;i <= n;i++) {
        cout << a[i] + d[i] << " ";
    }
    cout << '\n';
    return 0;
}