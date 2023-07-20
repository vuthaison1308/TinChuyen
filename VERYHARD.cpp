#include <bits/stdc++.h>
using namespace std;
long long n;
long long check(long long n){
    if (sqrt(n)*sqrt(n)==n) return 1;
    else return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("VERYHARD.INP", "r", stdin);
    freopen("VERYHARD.OUT", "w", stdout);
    cin >> n;
    long long a[n+1];
    for (long long i = 1; i <= n; i++){
        cin >> a[i];
        cout << check(a[i]) << " ";
    }
}
