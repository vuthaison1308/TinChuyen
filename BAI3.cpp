#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MAX = 1e3+5;
long long C[MAX][MAX];

void precompute() {
    for(int i=0; i<MAX; i++) {
        for(int j=0; j<=i; j++) {
            if(j==0 || j==i) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    precompute();

    int n, k;
    cin >> n >> k;
    cout << C[n][k] << "\n";

    return 0;
}
