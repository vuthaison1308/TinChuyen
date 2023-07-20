#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<int> factorial(1, 1);
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int& digit : factorial) {
            int temp = digit * i + carry;
            digit = temp % 10;
            carry = temp / 10;
        }
        while (carry > 0) {
            factorial.push_back(carry % 10);
            carry /= 10;
        }
    }
    cout << n << "! = ";
    for (auto it = factorial.rbegin(); it != factorial.rend(); it++) {
        cout << *it;
    }
    cout << endl;
    return 0;
}
