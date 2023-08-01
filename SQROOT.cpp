#include <bits/stdc++.h>
using namespace std;
long long n, ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("SQROOT.INP", "r", stdin);
    freopen("SQROOT.OUT", "w", stdout);
    cin >> n;
    ans = ((n%(6*2021))*((n+1)%(6*2021))*((2*n+1)%(6*2021)))/6;
    cout << ans%2021;
    return 0;
}
