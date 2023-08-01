#include <bits/stdc++.h>
using namespace std;
long long n, a;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("GRADING.INP", "r", stdin);
    freopen("GRADING.OUT", "w", stdout);
    cin >> n;
    while (n--){
        cin >> a;
        if (5-(a%5)<=2 && a>=38) a+= 5-(a%5);
        cout << a << endl;
    }
    return 0;
}
