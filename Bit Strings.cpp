#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    cin >> n;

    long long int res = 1;
    int mod = 1e9 + 7;

    while (n--) {
        res *=2;
        res %= mod;
    }
    cout << res << endl;
    return 0;
}
