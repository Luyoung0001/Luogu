#include <iostream>
using namespace std;
int main() {
    int ans = 1, k;
    double sum = 0.0;
    cin >> k;
    while (sum <= k) {
        sum += 1.0 / ans;
        ans++;
    }
    cout << ans - 1 << endl;
    return 0;
}