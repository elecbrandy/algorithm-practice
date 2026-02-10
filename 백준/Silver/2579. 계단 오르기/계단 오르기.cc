#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

/*
    1. 계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다.
    즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
    
    2. 연속된 세 개의 계단을 모두 밟아서는 안 된다. 단, 시작점은 계단에 포함되지 않는다.
    
    3. 마지막 도착 계단은 반드시 밟아야 한다.
    
    따라서 첫 번째 계단을 밟고 이어 두 번째 계단이나, 세 번째 계단으로 오를 수 있다.
    하지만, 첫 번째 계단을 밟고 이어 네 번째 계단으로 올라가거나, 첫 번째, 두 번째, 세 번째 계단을 연속해서 모두 밟을 수는 없다.

    현재 계단 단계 i
    계단 i까지 도착했을때 얻을수있는 점수 v[i]

    계단 i에 도착하기 직전 상태
    i - 1 에서 1칸 전진
    i - 2 에서 2칸 전진

    그런데 연속으로 세 칸을 밟을 수 없으므로
    현재 계단 단계 i
    계단 i에 도착하기 직전 상태가 만약 

    (i - 2) -> (i - 1)  -> (i) 은 안됨
    (i - 3) -> (i - 1)  -> (i) 은 됨

    (i - 2) -> (i) 은 됨
    
    v(i) = v(i) + max(v(i-1), v(i-2))
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> stair(n, 0);
    vector<int> v(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> stair[i];
    }

    v[0] = stair[0];
    v[1] = stair[0] + stair[1];
    v[2] = max(stair[1] + stair[2], stair[0] + stair[2]);

    for (int i = 3; i < n; i++) {
        v[i] = stair[i] + max(v[i-2], stair[i-1] + v[i-3]);
    }

    cout << v[n - 1];
    return 0;
}
