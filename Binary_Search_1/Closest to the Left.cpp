#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    while (k--) {
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, ans = -1;
        while (l <= r) {
            mid = (l + r) / 2;
            if (key >= a[mid]) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}