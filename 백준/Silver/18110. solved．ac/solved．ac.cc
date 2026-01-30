#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0) cout << 0;
    else {
        vector<int> rate(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> rate[i];
        }
        sort(rate.begin(), rate.end());
        int t = round((double)n / 100 * 15), divnum = n - (t * 2), sum = 0;
        for (int i = t; i < n - t; i++) {
            sum += rate[i];
        }
        cout << round((double)sum / divnum);
    }
}