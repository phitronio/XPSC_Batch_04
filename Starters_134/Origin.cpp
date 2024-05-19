#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        long long x, y;
        x = (n / 9) * 45;
        y = (n % 9);
        ans = x + ((y * (y + 1)) / 2);
        cout << ans << '\n';
    }

    return 0;
}