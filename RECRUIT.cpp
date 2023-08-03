#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("RECRUIT.INP", "r", stdin);
    freopen("RECRUIT.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    set<int> a;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    int i = 1;
    while (k > 0){
        if (a.find(i) == a.end()){
            cout << i << '\n';
            k--;
        }
        i++;
    }
    return 0;
}
