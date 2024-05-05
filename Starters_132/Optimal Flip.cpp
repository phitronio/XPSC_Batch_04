#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        long long ans = ((1LL * n * (n + 1)) / 2);

        int idx = 0;
        vector<int> v;

        while (idx < n) {
            int c = 0;
            if (a[idx] % 2 != 0) {
                while (true) {
                    if ((a[idx] % 2 == 0) || (idx >= n)) {
                        break;
                    }
                    c++;
                    idx++;
                }
                v.push_back(c);
            }
            else {
                idx++;
            }
        }

        sort(v.begin(), v.end());

        for (int i = 0;i < v.size();i++) {
            long long total = ((1LL * v[i] * (v[i] + 1)) / 2);
            ans -= total;
        }

        if (v.size() >= 1) {
            int curr = v[v.size() - 1], mid = (curr / 2);
            if (curr % 2 != 0) {
                mid++;
                ans += (1LL * mid * mid);
            }
            else {
                ans += (1LL * mid * (mid + 1));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}