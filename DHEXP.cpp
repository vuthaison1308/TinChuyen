#include <bits/stdc++.h>
using namespace std;
long long n, k, ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DHEXP.INP", "r", stdin);
    freopen("DHEXP.OUT", "w", stdout);
    cin >> n >> k;
    long long a[n+1];
    for (long long i = 1; i <= n; i++) cin >> a[i];
    long long dp[n+1][k+1];
    memset(dp, -0x3f, sizeof(dp));
    dp[1][0] = a[1];
    for (long long i = 2; i <= n; i++){
        for (long long j = 0; j <= min(i-1, k); j++){
            if (j == 0) dp[i][j] = dp[i-1][j] - a[i];
            else dp[i][j] = max(dp[i-1][j-1] + a[i], dp[i-1][j] - a[i]);
        }
    }
    ans = dp[n][k];
    cout << ans;
    return 0;
}
