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

    char a[100][100] = {0};

    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x, y = 0;
        cin >> x >> y;

        for (int j = x; j < x+10; j++) {
            for (int k = y; k < y+10; k++) {
                a[j][k] = 1;
            }
        }
    }

    int sum = 0;
    for (int j = 0; j < 100; j++) {
        for (int k = 0; k < 100; k++) {
            if (a[j][k] != 0)
                sum += a[j][k];
        }
    }
    cout << sum;
    return 0;
}
