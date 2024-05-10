#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 20;
    vector<bool> prime(n + 1, true);
    for (int i = 2;i * i <= n;i++) {
        if (prime[i]) {
            for (int j = i + i;j <= n;j += i) {
                prime[j] = false;
            }
        }
    }

    vector<int> all_primes;
    for (int i = 2;i <= n;i++) {
        if (prime[i]) {
            all_primes.push_back(i);
        }
    }

    // for (auto val : all_primes) {
    //     cout << val << " ";
    // }
    // cout << '\n';

    map<int, int> cnt;
    int x, idx = 0;
    cin >> x;
    while (x > 1) {
        if (x % all_primes[idx] == 0) {
            cnt[all_primes[idx]]++;
            x /= all_primes[idx];
        }
        else {
            idx++;
        }
    }

    for (auto [x, y] : cnt) {
        cout << x << " " << y << '\n';
    }
    return 0;
}