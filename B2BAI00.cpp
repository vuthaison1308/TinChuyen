#include <bits/stdc++.h>
using namespace std;
long long n, k, i, ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("B2BAI00.INP", "r", stdin);
    freopen("B2BAI00.OUT", "w", stdout);
    cin >> n >> k;
    while (n--){
        cin >> i;
        ans*=i%k;
    }
    cout << ans%k;
}
