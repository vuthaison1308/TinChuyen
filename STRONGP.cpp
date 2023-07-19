#include <bits/stdc++.h>
using namespace std;
string s;
long long n, vuthaison=0;
bool upper=false, lower=false, digit=false, others=false;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    for (long long i = 0; i < s.size(); i++)
        if (isupper(s[i])) upper=true;
        else if (islower(s[i])) lower=true;
        else if (isdigit(s[i])) digit=true;
        else others=true;
    vuthaison+=(upper==false)+(lower==false)+(digit==false)+(others==false);
    if (n>=6) cout << vuthaison;
    else cout << max(6-n, vuthaison);
    return 0;
}

