#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(2 * n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i + n] = a[i];   // duplicate for circular handling
        }

        // prefix XOR
        vector<long long> px(2 * n + 1, 0);
        for (int i = 1; i <= 2 * n; i++) {
            px[i] = px[i - 1] ^ a[i - 1];
        }

        unordered_map<long long, deque<int>> pos;
        int ans = 0;

        for (int i = 0; i <= 2 * n; i++) {
            long long cur = px[i];

            // Remove positions that exceed window size n
            while (!pos[cur].empty() && i - pos[cur].front() > n) {
                pos[cur].pop_front();
            }

            // If exists, update answer
            if (!pos[cur].empty()) {
                ans = max(ans, i - pos[cur].front());
            }

            pos[cur].push_back(i);
        }

        cout << ans << "\n";
    }

    return 0;
}