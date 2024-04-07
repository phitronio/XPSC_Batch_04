#include <bits/stdc++.h>
using namespace std;
const int maxN = (1 << 15);
vector<int> all_palindromes;

void mark_palindrome() {
    for (int i = 0;i < maxN;i++) {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;
        for (int i = 0;i < (len / 2);i++) {
            if (s[i] != s[len - i - 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            all_palindromes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(maxN), a;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        long long ans = n;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < all_palindromes.size();j++) {
                int curr = (a[i] ^ all_palindromes[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << '\n';
    }
    return 0;
}