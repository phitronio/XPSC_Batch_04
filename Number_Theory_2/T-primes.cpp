#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n == 1) {
        return false;
    }

    for (long long i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPerfectSquare(long long n) {
    long long x = sqrtl(n);
    return (x * x) == n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    for (int i = 0;i < n;i++) {
        if (isPrime(sqrtl(a[i])) && isPerfectSquare(a[i])) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}