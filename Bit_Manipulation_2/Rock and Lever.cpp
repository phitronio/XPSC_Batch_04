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
        map<int, int> cnt;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            cnt[__lg(x)]++;
        }

        long long ans = 0;
        for (auto [x, y] : cnt) {
            ans += (1LL * y * (y - 1)) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}