/*
수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.
*/


#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    vector<double> v(n, 0);
    map<double, int> m;
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
        v[i] = tmp;
        m[tmp]++;
    }

    sort(v.begin(), v.end());

    // 산술평균
    double sum = 0.0;
    for (auto &t : v) {
        sum += t;
    }
    double tmp2 = round(sum / n);
    int average = static_cast<int>(tmp2);

    // 중앙값
    int middle = static_cast<int>(v[static_cast<int>(n / 2)]);

    // 최빈값
    int mode = 0;
    vector<double> v2;
    int _max = INT_MIN;
    for (const auto &it : m) {
        if (_max < it.second) {
            _max = it.second;
        }
    }
    for (const auto &it : m) {
        if (it.second == _max)
            v2.push_back(it.first);
    }
    if (v2.size() > 1) {
        sort(v2.begin(), v2.end());
        mode = v2[1];
    } else {
        mode = v2[0];
    }

    // 범위
    int bound = static_cast<int>(v[n-1] - v[0]);

    cout << average << '\n';
    cout << middle << '\n';
    cout << mode << '\n';
    cout << bound;
    return 0;
}
