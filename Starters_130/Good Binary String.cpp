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
        string s;
        cin >> s;
        vector<int> idx;
        int prev = 1;
        for (int i = 0;i < n - 1;i += 2) {
            if (s[i] != s[i + 1]) {
                if (prev != (s[i] - '0')) {
                    idx.push_back(i);
                    prev = (s[i] - '0');
                }
                else {
                    idx.push_back(i + 1);
                    prev = (s[i + 1] - '0');
                }
            }
        }

        cout << idx.size() << '\n';
        for (auto val : idx) {
            cout << val + 1 << " ";
        }
        cout << '\n';
    }
    return 0;
}