#include <bits/stdc++.h>
using namespace std;
long long n;
int sumDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int exp = 0;
            int term = 1;
            while (n % i == 0) {
                exp++;
                n /= i;
                term += pow(i, exp);
            }
            sum *= term;
        }
    }
    if (n > 1) sum *= (n + 1);
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CASUMDIV.INP", "r", stdin);
    freopen("CASUMDIV.OUT", "w", stdout);
    cin >> n;
    cout << sumDivisors(n);
}
