#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1;i <= n;i++) {
            cin >> a[i];
        }

        for (int i = 1;i <= n;i++) {
            cin >> b[i];
        }

        long long ans = 0;
        for (int i = n;i > m;i--) {
            ans += min(a[i], b[i]);
        }

        vector<long long> pref(m + 1);
        for (int i = 1;i <= m;i++) {
            pref[i] = pref[i - 1] + b[i];
        }

        long long mn = LLONG_MAX;
        for (int i = 1;i <= m;i++) {
            mn = min(mn, a[i] + (pref[m] - pref[i]));
        }
        ans += mn;
        cout << ans << '\n';
    }
    return 0;
}