#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, l;
        cin >> n >> l;
        vector<int> ans;
        int nxt = 2;
        while (true) {
            if (ans.size() == n || (l * nxt) > maxN) {
                break;
            }
            ans.push_back(l * nxt);
            nxt++;
        }

        if (ans.size() < n) {
            int curr = l / 2;
            while (true) {
                if (ans.size() == n) {
                    break;
                }
                ans.push_back(curr);
                curr--;
            }
        }

        for (auto val : ans) {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}