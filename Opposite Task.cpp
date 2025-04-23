#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = max(0, n - 10);
        int b = n - a;

        cout << a << " " << b << endl;
    }
    return 0;
}
