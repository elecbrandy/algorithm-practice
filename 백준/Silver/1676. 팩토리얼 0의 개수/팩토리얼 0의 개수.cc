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

    int n = 0;
    cin >> n;

    if (n == 0) {
        cout << '0';
        return 0;
    }
    int c = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        c += n / i;
    }
    cout << c;
    return 0;
}
