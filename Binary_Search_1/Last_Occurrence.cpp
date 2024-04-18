// 12 11
// 4 8 11 11 11 11 11 15 15 20 21 25

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, key;
    cin >> n >> key;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1, mid, idx = -1;
    while (l <= r) {
        mid = (l + r) / 2;
        if (key == a[mid]) {
            idx = mid;
            l = mid + 1;
        }
        else if (key < a[mid]) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << idx << '\n';

    return 0;
}