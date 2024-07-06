#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    if (n == 0) {
        return;
    }
    print(n - 1);
    cout << n << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    print(n);
    return 0;
}