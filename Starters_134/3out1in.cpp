#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        multiset<int> mini, maxi;
        vector<long long> ans(n);
        long long s1 = 0, s2 = 0;
        for (int i = 0;i < n;i++) {
            mini.insert(a[i]);
            s1 += a[i];
            if (mini.size() >= maxi.size()) {
                int value = *mini.rbegin();
                mini.erase(--mini.end());
                maxi.insert(value);
                s1 -= value;
                s2 += value;
            }
            if (!mini.empty() && !maxi.empty() && (*mini.rbegin() > *maxi.begin())) {
                int x = *mini.rbegin(), y = *maxi.begin();
                s1 -= x, s1 += y;
                s2 -= y, s2 += x;
                mini.erase(--mini.end());
                maxi.erase(maxi.begin());
                mini.insert(y);
                maxi.insert(x);
            }
            ans[i] = (s2 - s1);
        }

        while (q--) {
            int x;
            cin >> x;
            x--;
            cout << ans[x] << " ";
        }
        cout << '\n';
    }
    return 0;
}