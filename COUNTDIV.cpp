#include <bits/stdc++.h>
using namespace std;
long long n;
int countDivisors(long long n) {
    int count = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int exp = 0;
            while (n % i == 0) {
                exp++;
                n /= i;
            }
            count *= (exp + 1);
        }
    }
    if (n > 1) count *= 2;
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("COUNTDIV.INP", "r", stdin);
    freopen("COUNTDIV.OUT", "w", stdout);
    cin >> n;
    cout << countDivisors(n);
}
