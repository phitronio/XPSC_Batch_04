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

        bool ok = true;

        if (n > 1) {
            if (a[0] != a[n - 1]) {
                ok = false;
            }
            else {
                for (int i = 1;i < n - 1;i++) {
                    if (a[i] < a[0]) {
                        ok = false;
                        break;
                    }
                }
            }
        }

        if (ok) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}