#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k, mx = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        for (int i = 0;i < n;i++) {
            a[i] += ((mx - a[i]) / k) * k;
        }

        sort(a.begin(), a.end());

        int ans = a[n - 1] - a[0];
        for (int i = 0;i < n - 1;i++) {
            ans = min(ans, (a[i] + k) - a[i + 1]);
        }

        cout << ans << '\n';
    }
    return 0;
}