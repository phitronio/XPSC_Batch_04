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
        int ans = 0;
        vector<int> a(n + 1);
        for (int i = 1;i <= n;i++) {
            cin >> a[i];
        }

        int i = 1;
        while (i < n) {
            if ((a[i] == i) && (a[i + 1] == (i + 1))) {
                ans++;
                swap(a[i], a[i + 1]);
                i += 2;
            }
            else {
                i++;
            }
        }

        for (int i = 1;i <= n;i++) {
            if (a[i] == i) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}