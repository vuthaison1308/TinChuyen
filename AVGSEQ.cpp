#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("AVGSEQ.INP", "r", stdin);
    freopen("AVGSEQ.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> a(n);
    a[0] = b[0];
    for (int i = 1; i < n; i++) {
        a[i] = (b[i] * (i + 1)) - (b[i - 1] * i);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
