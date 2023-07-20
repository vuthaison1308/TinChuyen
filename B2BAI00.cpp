#include <bits/stdc++.h>
using namespace std;
long long n, k, ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("B2BAI00.INP", "r", stdin);
    freopen("B2BAI00.OUT", "w", stdout);
    cin >> n >> k;
    long long a[n+1];
    for (long long i = 1; i <= n; i++) cin >> a[i];
    for (long long i = 1; i <= n; i++){
        ans=(ans*(a[i]%k))%k;
    }
    cout << ans;
}
