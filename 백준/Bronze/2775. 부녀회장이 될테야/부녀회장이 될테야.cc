#include <iostream>
#include <string>
#include <algorithm>

/*
    평소 반상회에 참석하는 것을 좋아하는 주희는 이번 기회에 부녀회장이 되고 싶어 각 층의 사람들을 불러 모아 반상회를 주최하려고 한다.
    a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다
    아파트에 비어있는 집은 없고 모든 거주민들이 이 계약 조건을 지키고 왔다고 가정했을 때,
    주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라.
    단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.
*/

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    cin >> T;
    
    for (int i =0; i < T; i++) {

        int a[16][16] = {0,};
        int k = 0; // 층
        int n = 0; // 호
        cin >> k >> n;

        // 0층 1호 ~ 15호 초기화
        for (int j = 1; j < 16; j++) {
            a[0][j] = j;
        }

        // j 층의
        for (int j = 1; j < 16; j++) {
            // k 호의 가구 수는
            for (int k = 1; k < 16; k++) {
                // j-1 층의 [1] ~ [k]의 가구 수 합
                for (int l = 1; l <= k; l++) {
                    a[j][k] += a[j-1][l];
                }
            }
        }
        cout << a[k][n] << "\n";
    }
    return 0;
}
