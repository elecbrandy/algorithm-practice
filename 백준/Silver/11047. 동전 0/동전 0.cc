#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m = 0;
    cin >> n >> m;
    vector<int> coin(n);
    
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    int result = 0;
    int target = m;
    int idx = n - 1;

    // target 금액이 0이 될때까지
    while (target != 0) {
        // 현재 동전보다 target이 크면 pass
        if (coin[idx] > target) {
            idx--;
            continue ;
        }

        // cout << coin[idx] << ": " << (target / coin[idx]) << "\n";
        result += (target / coin[idx]);
        target = (target % coin[idx]);
        idx--;
    }

    cout << result;
    return 0;
}