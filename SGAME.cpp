#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, b[N], c[N];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SGAME.INP", "r", stdin);
    freopen("SGAME.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];
    sort(b + 1, b + n + 1);
    sort(c + 1, c + n + 1);
    int ans = abs(b[1] + c[1]);
    for (int i = 1, j = n; i <= n && j >= 1;) {
        ans = min(ans, abs(b[i] + c[j]));
        if (b[i] + c[j] > 0) j--;
        else i++;
    }
    cout << ans;
}
