#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1 ≤ N ≤ 10,000,000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;
    int a[10002] = {0};
    
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        cin >> tmp;
        a[tmp]++;
    }

    // for (int i = 1; i < 10001; i++) {
    //     if (a[i] != 0) {
    //         cout << "a[" << i << "]: " << a[i] << '\n';
    //     }
    // }

    for (int i = 1; i < 10002; i++) {
        if (a[i] != 0) {
            for (int j = 0; j < a[i]; j++) {
                cout << i << '\n';
            }
        }
    }
    return 0;
}
