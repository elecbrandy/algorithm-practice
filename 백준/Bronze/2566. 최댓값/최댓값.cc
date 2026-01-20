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

    int a[9][9] = {0};

    int max = 0;
    int max_i = 0;
    int max_j = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            // cin >> a[i][j];
            int input = 0;
            cin >> input;
            if (input >= max) {
                max = input;
                max_i = i;
                max_j = j;
            }
        }
    }
    cout << max << '\n' << max_i + 1 << ' ' << max_j + 1;
    // cout << max_i << ' ';

    return 0;
}
