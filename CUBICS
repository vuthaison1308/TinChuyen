#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <map>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
using namespace std;
const son N = 1e6+5;
int main()
{
    if (true) if (false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("CUBICS.INP", "r", stdin);
//    freopen("CUBICS.OUT", "w", stdout);
    son n, k;
    cin >> n >> k;
    vector<son> a(n+1), presum(n+1, 0);
    for(son i = 1; i <= n; i++) {
        cin >> a[i];
        presum[i] = presum[i-1] + a[i] - k;
    }
    map<son, son> qq;
    qq[0] = 0;
    son maxx = 0, go = 0;
    for(son i = 1; i <= n; i++) {
        if (qq.count(presum[i]) == 0) qq[presum[i]] = i;
        else {
            if (i - qq[presum[i]] > maxx) maxx = i - qq[presum[i]], go = qq[presum[i]] + 1;
        }
    }

    if(maxx == 0) cout << 0;
    else cout << maxx << " " << go;
    return 0;
}
