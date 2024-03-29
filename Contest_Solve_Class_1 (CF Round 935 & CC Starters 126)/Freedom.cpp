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
        map<int, int> cnt;
        for (int i = 0;i < n;i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long ans = 0;
        for (int j = n - 1;j >= 1;j--) {
            cnt[a[j]]--;
            int need = (a[j] * 2);
            for (int i = 2;i <= 10;i++) {
                int x, y;
                x = i + a[j];
                y = i * a[j];
                if ((y - x) == need) {
                    if (cnt[i] >= 1) {
                        ans += cnt[i];
                    }
                }
                else if ((y - x) > need) {
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}