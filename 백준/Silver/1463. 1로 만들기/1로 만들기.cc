#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

/*
    i = 1 부터 시작해서 N에 도달할때까지 증가한다.
    (1, 2, 3, ... i ... N)
    array[i] 에는 i 까지 도달하기 위한 연산의 갯수를 적는다.

    i에 도달하기 직전의 상태는 3가지 중 하나였을 것이다.
    case A: (i/3) * 3
    case B: (i/2) * 2
    case C: (i-1) + 1

    우리가 골라야하는 것은 min(A,B,C)
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    
    v[0] = 0;
    v[1] = 0;

    for (int i = 2; i <= n; i++) {
        v[i] = v[i-1] + 1;

        if (i % 2 == 0) {
            v[i] = min(v[i], v[i/2] + 1);
        }

        if (i % 3 == 0) {
            v[i] = min(v[i], v[i/3] + 1);
        }
    }
    cout << v[n];
    return 0;
}
