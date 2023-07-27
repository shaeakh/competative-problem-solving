#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, count = 0, a = 0, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        a += x;
            if (a < 0) {
                count++;
                a = 0;
            }
    }
    cout << count << endl;

}
