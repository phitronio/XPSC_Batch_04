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
        vector<int> a(n), b(m);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }
        for (int i = 0;i < m;i++) {
            cin >> b[i];
        }

        if ((n < 4) || (m < 4) || (n + m) < 11) {
            cout << -1 << '\n';
            continue;
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        long long ans = 0;
        for (int i = 0;i < 4;i++) {
            ans += (a[i] + b[i]);
        }

        int l = 4, r = 4, total = 8;
        while (total < 11) {
            if (l < n && r < m) {
                if (a[l] > b[r]) {
                    ans += a[l];
                    l++;
                }
                else {
                    ans += b[r];
                    r++;
                }
            }
            else if (l < n) {
                ans += a[l];
                l++;
            }
            else {
                ans += b[r];
                r++;
            }
            total++;
        }

        cout << ans << '\n';
    }

    return 0;
}