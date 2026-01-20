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

    int N = 0; // 참가자 수
    array<int, 6> size;// 티셔츠 사이즈별 수
    int T, P = 0; // 티셔츠 묶음 수, 펜 묶음 수

    int resultP = 0;
    int resultT = 0;
    
    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }
    cin >> T >> P;

    for (int i = 0; i < 6; i++) {
        if (size[i] == 0) {
            continue;
        } else if (size[i] <= T) {
            resultT++;
        } else {
            int tmp = size[i] % T;
            if (tmp == 0) {
                resultT += size[i] / T;
            } else {
                resultT += (size[i] / T) + 1;
            }
        }
    }
    cout << resultT << '\n';
    cout << N / P << ' ' << N % P;
    return 0;
}
