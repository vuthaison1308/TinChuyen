#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PERMU.INP", "r", stdin);
    freopen("PERMU.OUT", "w", stdout);
    string n;
    cin >> n;
    int sum = 0, cnt[10] = {0};
    bool hasZero = false;
    for (char c : n) {
        int x = c - '0';
        sum += x;
        cnt[x]++;
        if (x == 0) hasZero = true;
    }
    if (!hasZero || sum % 3 != 0) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 9; i >= 0; i--) {
        while (cnt[i]--) cout << i;
    }
    cout << endl;
    return 0;
}
