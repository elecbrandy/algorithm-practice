#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int checkBoard(char b[][50], int start_i, int start_j, char start) {
    int result = 0;
    char first = start;
    char second = (first == 'W') ? 'B' : 'W';

    // 8 * 8 순회 (idx 기준)
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0 && b[start_i + i][start_j + j] != first) {
            // 짝수줄 짝수칸: first
                result++;
            } else if (i % 2 == 0 && j % 2 != 0 && b[start_i + i][start_j + j] != second) {
            // 짝수줄 홀수칸: second
                result++;
            } else if (i % 2 != 0 && j % 2 == 0 && b[start_i + i][start_j + j] != second) {
            // 홀수줄 짝수칸: second
                result++;
            } else if (i % 2 != 0 && j % 2 != 0 && b[start_i + i][start_j + j] != first) {
            // 홀수줄 홀수칸: first
                result++;
            }
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char b[50][50] = {0};
    
    int n, m = 0;
    cin >> n >> m;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    int _min = INT_MAX;
    // 8 * 8 이동 (시작점)
    for (int i = 0; i < n - 8 + 1; i++) {
        for (int j = 0; j < m - 8 + 1; j++) {
            int tmp = min(checkBoard(b, i, j, 'W'), checkBoard(b, i, j, 'B'));
            if (_min > tmp) {
                _min = tmp;
            }
        }
    }

    cout << _min;
    return 0;
}
