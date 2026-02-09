#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

/*
    정수 4를 1, 2, 3의 합으로 나타내는 방법은 총 7가지가 있다. 합을 나타낼 때는 수를 1개 이상 사용해야 한다.
    1+1+1+1
    1+1+2
    1+2+1
    2+1+1
    2+2
    1+3
    3+1
    정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.

    1 1
    2 2 1+1
    3 1+2 1+1+1

    (n) 을 만들기 위한 조합은
    (n - 1)을 만들기 위한 조합 +1
    (n - 2)을 만들기 위한 조합 +2
    (n - 3)을 만들기 위한 조합 +3

    그럼 f(n) = f(n-1) + f(n-2) + f(n-3)


*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int m = 0;
        cin >> m;
        vector<int> v(m + 1, 0);
        
        v[1] = 1;
        v[2] = 2;
        v[3] = 4;
        v[4] = 7;
    
        for (int i = 5; i < m + 1; i++) {
            v[i] = v[i - 1] + v[i - 2] + v[i - 3];
        }
        cout << v[m] << '\n';
    }
    return 0;
}
