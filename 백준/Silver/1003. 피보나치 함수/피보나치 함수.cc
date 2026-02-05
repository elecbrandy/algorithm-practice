#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int t = 0;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n = 0;
        cin >> n;
        int one[42] = {0};
        int zero[42] = {0};
    
        zero[0] = 1;
        zero[1] = 0;    
        one[0] = 0;
        one[1] = 1;

        for (int i = 2; i < 42; i++) {
            zero[i] = zero[i - 1] + zero[i - 2];
            one[i] = one[i - 1] + one[i - 2];
        }
        cout << zero[n] << ' ' << one[n] << '\n';
    }
    return 0;
}

