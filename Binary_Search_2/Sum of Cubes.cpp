#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e4;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> pw;
    for (int i = 1;i <= maxN;i++) {
        pw.push_back(pow(i, 3));
    }

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        bool found = false;

        for (int i = 0;i < maxN;i++) {
            if (pw[i] >= x) {
                break;
            }
            int l = 0, r = maxN - 1, mid;
            long long need = x - pw[i];
            bool ok = false;
            while (l <= r) {
                mid = l + (r - l) / 2;
                if (pw[mid] == need) {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            if (ok) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}