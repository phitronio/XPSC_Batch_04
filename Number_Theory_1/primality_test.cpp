#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }

    for (int i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "Prime" << '\n';
    }
    else {
        cout << "Not Prime" << '\n';
    }
    return 0;
}