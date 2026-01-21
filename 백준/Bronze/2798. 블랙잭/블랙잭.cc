#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

// 1, 7, 19, 37, 61
//  6*1.  6*2.  6*3
// 1  2~7  8~19 ...
// 0  1.    2

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    int N, M = 0;
    cin >> N >> M;

    int a[120] = {0};

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int tmp1, tmp2, tmp3 = 0;
    int max = -100;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = 0;
                sum = a[i] + a[j] + a[k];
                if (sum <= M && sum > max) {
                    max = sum;
                }
            }
        }
    }
    cout << max;
    return 0;
}
