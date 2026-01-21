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

    char a[15][15] = {0};

    for (int i = 0; i < 5; i++) {
        string tmp;
        getline(cin, tmp);
        for (int j = 0; j < tmp.size(); j++) {
            a[i][j] = tmp[j];
        }
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (a[j][i] != 0)
                cout << a[j][i];
        }
    }
    return 0;
}
