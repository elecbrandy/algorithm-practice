#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 10000; i++) {
        array<int,3> a = {0};
        cin >> a[0] >> a[1] >> a[2];

        if (a[0] + a[1] + a[2] == 0)
            return 0;
        sort(a.begin(), a.end());

        long long tmp1 = a[2] * a[2];
        long long tmp2 = a[1] * a[1];
        long long tmp3 = a[0] * a[0];

        if (tmp1 == tmp2 + tmp3) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
    return 0;
}


