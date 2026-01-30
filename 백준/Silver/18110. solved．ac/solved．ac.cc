#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 0;
    int result = 0;
    
    cin >> n;
    if (n == 0) {
        cout << '0';
        return 0;
    }
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    // 제외인원 = 전체의 30%
    double ex_num = ((double)n /100 * 15);
    int tmp = round(ex_num);


    int sum = 0;
    for (int i = tmp; i < v.size() - tmp; i++) {
        sum += v[i];
    }
    double av = (double)sum / (v.size() - (tmp * 2));
    result = round(av);

    cout << result;
    return 0;
}
