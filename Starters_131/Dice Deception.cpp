#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;
        for (int i = 0;i < n;i++) {
            if (a[i] == 1 && k >= 1) {
                ans += 6;
                k--;
            }
            else if (a[i] == 2 && k >= 1) {
                ans += 5;
                k--;
            }
            else if (a[i] == 3 && k >= 1) {
                ans += 4;
                k--;
            }
            else {
                ans += a[i];
            }
        }

        cout << ans << '\n';
    }
    return 0;
}