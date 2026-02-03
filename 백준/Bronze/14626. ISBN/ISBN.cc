#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;
    int a[14] = {0};
    int m = atoi(&input[12]);
    int result_idx = 0;
    
    for (int i = 0; i < 12; i++) {
        if (input[i] == '*') {
            result_idx = i;
            a[i] = (i & 1) ? 3 : 1; // 나중에 곱할 값 미리 저장
            continue;
        }
        // 인덱스 홀수면 1곱 / 짝수면 3곱
        int tmp = input[i] - '0';
        a[i] = (i & 1) ? tmp * 3 : tmp * 1;
    }

    int sum = 0; // 다 더하고
    for (int i = 0; i < 12; i++) {
        if (i != result_idx)
            sum += a[i];
    }
    sum += m;
    if (result_idx == 12) {
        for (int i = 0; i < 10; i++) {
            if ((sum + i) % 10 == 0) {
                cout << i << '\n';
                return 0;
            }        
        }
    } else {
        for (int i = 0; i < 10; i++) {
            if ((sum + (i * a[result_idx])) % 10 == 0) {
                cout << i << '\n';
                return 0;
            }        
        }
    }

    return 0;
}
