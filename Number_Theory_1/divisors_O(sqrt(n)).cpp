#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> divisors;
    for (int i = 1;i * i <= n;i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if ((n / i) != i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (auto value : divisors) {
        cout << value << " ";
    }
    cout << '\n';

    return 0;
}