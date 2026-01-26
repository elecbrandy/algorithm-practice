#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int is_shom(int n) {
    string tmp = to_string(n);
    size_t len = tmp.length();
    for (int j = 0; j < len; j++) {
        if (j + 1 < len && \
            j + 2 < len && \
            tmp[j] == '6' && \
            tmp[j+1] == '6' && \
            tmp[j+2] == '6') {
                return true;
            }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int cnt = 1;
    cin >> n;
    int i = 665;
    
    while (true) {
        // 해당 숫자가 숌 인경우
        if (is_shom(i)) {
            // cnt 못채운경우
            if (cnt != n) {
                cnt++;
                // cout << "cnt: " << cnt << ", i: " << i << '\n';
            } else {
            // 다 채운경우
                cout << i << '\n';
                return 0;
            }
        }
        i++;
    }

    return 0;
}