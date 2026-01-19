#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    int M = 0;

    cin >> N; // 바구니 총 갯수 
    cin >> M; // 바구니 역순 총 횟수

    

    vector<int> v(N, 0);
    for (int i = 0; i < N; i++) {
        v[i] = i;
    }

    for (int i = 0; i < M; i++) { // M번 순회
        int start_idx = 0;
        int end_idx = 0;

        cin >> start_idx;
        cin >> end_idx;

        start_idx--;
        end_idx--;

        while (start_idx < end_idx) {
            swap(v[end_idx], v[start_idx]);
            start_idx++;
            end_idx--;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << v[i] + 1 << " ";
    }
    return 0;
}