#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007;

long long modexp(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long m;
        cin >> m;
        long long exponent = (m - 1) * (m - 1);
        cout << modexp(2, exponent) << "\n";
    }
    return 0;
}