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
        string a, b;
        cin >> a;
        cin >> b;

        bool ok = true;
        for (int i = 0;i < n;i++) {
            if (b[i] == 'b' && a[i] != 'b') {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "No" << '\n';
            continue;
        }

        deque<int> B, c_a_pairs;
        for (int i = 0;i < n;i++) {
            if (a[i] == 'b') {
                B.push_back(i);
            }
            if (a[i] == 'c' && b[i] == 'a') {
                c_a_pairs.push_back(i);
            }
        }

        for (int i = 0;i < n;i++) {
            if (a[i] == 'a' && b[i] == 'c') {
                if (!c_a_pairs.empty() && !B.empty()) {
                    if (B.front() > c_a_pairs.front()) {
                        break;
                    }
                    swap(a[i], a[c_a_pairs.front()]);
                    c_a_pairs.pop_front();
                }
                else {
                    break;
                }
            }
            else {
                if (!B.empty() && B.front() == i) {
                    B.pop_front();
                }
                if (!c_a_pairs.empty() && c_a_pairs.front() == i) {
                    c_a_pairs.pop_front();
                }
            }
        }
        if (a == b) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
