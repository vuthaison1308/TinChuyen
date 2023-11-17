#include <bits/stdc++.h>

using namespace std;
using son = long long;
const son N = 1e6+5;
son n, a[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("MINGROUP1.INP", "r", stdin);
    freopen("MINGROUP1.OUT", "w", stdout);
    cin >> n;
    son t = 0;
    for(son i=0; i<n; i++) {
        cin >> a[i];
        t += a[i];
    }
    son m = 0, c = 0;
    for(son i=0; i<t; i++) {
        c += a[i];
    }
    m = c;
    for(son i=t; i<n; i++) {
        c += a[i] - a[i-t];
        m = max(m, c);
    }
    cout << t - m;
    return 0;
}
