#include <bits/stdc++.h>
using namespace std;
long long n, k, ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("B2BAI1.INP", "r", stdin);
    freopen("B2BAI1.OUT", "w", stdout);
    cin >> n >> k;
    for (long long i = 1; i <= n; i++){
        ans+=(i*i)%k;
    }
    cout << ans%k;
}
