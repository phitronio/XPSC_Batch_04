#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, ans;
        cin >> n;
        ans = n;
        string s;
        cin >> s;
        for (int i = 0;i < n - 1;i++) {
            if (s[i] == s[i + 1]) {
                ans--;
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}