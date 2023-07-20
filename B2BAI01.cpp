#include <bits/stdc++.h>
using namespace std;
long long n, k, ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("B2BAI01.INP", "r", stdin);
    freopen("B2BAI01.OUT", "w", stdout);
    cin >> n >> k;
    for (n; n > 0; n--){
        ans*=n%k;
    }
    cout << ans%k;
}
