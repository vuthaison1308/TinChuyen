#include <bits/stdc++.h>
using namespace std;
#define el endl
long long sonnopro;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("PAIR.INP", "r", stdin);
    freopen("PAIR.OUT", "w", stdout);
    cin >> sonnopro;
    long long ans = 0;
    unordered_map<int, int> cnt;
    for (int i = 0; i < sonnopro; i++) {
        int x;
        cin >> x;
        if (cnt.count(-x)) ans += cnt[-x];
        cnt[x]++;
    }
    cout << ans << el;
    return 0;
}
