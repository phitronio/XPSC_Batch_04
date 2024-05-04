#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e2 + 9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> bit(maxN);
        for (int i = 1;i <= n;i++) {
            string s;
            cin >> s;
            int pos = 0, cnt = count(s.begin(), s.end(), '1');
            if (cnt == 1) {
                for (int j = k - 1;j >= 0;j--) {
                    if (s[j] == '1') {
                        bit[pos] = 1;
                    }
                    pos++;
                }
            }
        }

        bool ok = true;
        for (int i = 0;i < k;i++) {
            if (bit[i] == 0) {
                ok = false;
                break;
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