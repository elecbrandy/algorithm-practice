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

    int L;
    long long M = 1234567891;
    cin >> L;
    char a[60] = {0};

    long long result = 0;


    for (int i = 0; i < L; i++) {
        char tmp = 0;
        cin >> tmp;
        
        long long r = 1;
        for (int j = 0; j < i; j++) {
            r *= 31;
        }
        result += ((tmp - 'a' + 1) * r) % M;
        // cout << (tmp - 'a' + 1) * r;
    }
    cout << result;
    return 0;
}
