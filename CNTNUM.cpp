#include <bits/stdc++.h>
using namespace std;

long long A, B, C, D;

long long count(long long n) {
    return n - n / C - n / D + n / (C * D / __gcd(C, D));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CNTNUM.INP", "r", stdin);
    freopen("CNTNUM.OUT", "w", stdout);
    cin >> A >> B >> C >> D;
    cout << count(B) - count(A - 1) << endl;
    return 0;
}
