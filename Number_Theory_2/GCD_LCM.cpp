#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b);
}

int lcm(int a, int b) {
    // return ((a * b) / gcd(a, b));
    return ((a / gcd(a, b)) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << '\n';
    return 0;
}