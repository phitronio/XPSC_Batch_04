#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (k > 30) {
            cout << "No" << '\n';
        }
        else {
            int need = k - 1, pw = 1;
            while (need--) {
                pw *= 2;
            }
            if (x > (pw - 1)) {
                cout << "Yes" << '\n';
            }
            else {
                cout << "No" << '\n';
            }
        }
    }

    return 0;
}