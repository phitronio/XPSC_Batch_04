#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long s = 0;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0;i < n;i++) {
            if (s <= 1 || a[i] == 1) {
                s += a[i];
            }
            else {
                s = (s * a[i]) % MOD;
            }
        }

        cout << s << '\n';
    }
    return 0;
}