#include <iostream>
#include <algorithm>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
using namespace std;
const son N = 1e6+5;

son phi(son n) {
    son result = n;
    for (son i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("LUCKY.INP", "r", stdin);
//    freopen("LUCKY.OUT", "w", stdout);

    son n;
    cin >> n;
    cout << phi(n) << endl;

    return 0;
}
