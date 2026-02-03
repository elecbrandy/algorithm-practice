#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

/*
    여러분도 알다시피 여러분의 프린터 기기는 여러분이 인쇄하고자 하는 문서를 인쇄 명령을 받은 ‘순서대로’, 즉 먼저 요청된 것을 먼저 인쇄한다.
    여러 개의 문서가 쌓인다면 Queue 자료구조에 쌓여서 FIFO - First In First Out - 에 따라 인쇄가 되게 된다.
    하지만 상근이는 새로운 프린터기 내부 소프트웨어를 개발하였는데, 이 프린터기는 다음과 같은 조건에 따라 인쇄를 하게 된다.
    현재 Queue의 가장 앞에 있는 문서의 ‘중요도’를 확인한다.

    나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있다면, 이 문서를 인쇄하지 않고 Queue의 가장 뒤에 재배치 한다.
    그렇지 않다면 바로 인쇄를 한다.
                            2 1 4 3
    예를 들어 Queue에 4개의 문서(A B C D)가 있고, 중요도가 2 1 4 3 라면 C를 인쇄하고, 다음으로 D를 인쇄하고 A, B를 인쇄하게 된다.
    여러분이 할 일은, 현재 Queue에 있는 문서의 수와 중요도가 주어졌을 때, 어떤 한 문서가 몇 번째로 인쇄되는지 알아내는 것이다.
    예를 들어 위의 예에서 C문서는 1번째로, A문서는 3번째로 인쇄되게 된다.

*/

class Data {
public:
    int _rank;
    bool _target;

    Data(int rank, int target) {
        this->_rank = rank;
        this->_target = target;
    }

private:
    Data() {};

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        queue<Data> q;
        vector<int> v;
        int len, target_idx = 0;
        cin >> len >> target_idx;
        
        for (int j = 0; j < len; j++) {
            int tmp = 0;
            cin >> tmp;
            q.push(Data(tmp, (target_idx == j) ? true : false));
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());

        int v_max_idx = len - 1;
        int print_count = 0;
        while(!q.empty()) {
            // 현재 pop 대상이 최대 가중치인 경우 -> 바로 출력
            if (v[v_max_idx] <= q.front()._rank) {
                // target 인경우 -> 루프 끝
                if (q.front()._target == true) {
                    print_count++;
                    cout << print_count << '\n';
                    break ;
                } else {
                    // target 아닌 경우
                    q.pop();
                    v_max_idx--;
                    print_count++;
                }
            } else {
            // 최대 가중치가 아닌 경우 -> 큐 뒤로 이동.
                q.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}