#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>   
#include <cmath>

using namespace std;

/*
    M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m = 0;
    cin >> n >> m;
    
    int len = m - n + 1;
    vector<int> v;

    for (int i = n; i < m + 1; i++) {
        if (i == 1)
            v.push_back(INT_MIN);
        else
            v.push_back(i);
    }

    int t = static_cast<int>(sqrt((double)m)) + 1;
    // cout << "t" << t << '\n';
    
    for (int i = 2; i < t; i++) {
        for (int j = 0; j < v.size(); j++) {
            if (v[j] == 1) {
                cout << "asdf\n";
                v[j] = INT_MIN;
                continue;
            }
            else if (v[j] == INT_MIN || v[j] == i)
                continue;
            else if (v[j] % i == 0)
                v[j] = INT_MIN;
        }
    }

    for (int i = 0; i < len; i++) {
        if (v[i] != INT_MIN)
            cout << v[i] << '\n';
    }

    return 0;
}