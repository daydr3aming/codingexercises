#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// DIA 2 Concurso Individual
// A. Rana 1 - AtCoder dp_c

int main(){
    int n;
    cin >> n;
    vector<int> stones(n, -1);

    for (int i = 0; i < n; i++) {
        std::cin >> stones[i];
    }

    int dp[n];
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        int fs = dp[i - 1] + abs(stones[i] - stones[i - 1]);
        int ss = INT_MAX;
        if (i > 1) {
            ss = dp[i - 2] + abs(stones[i] - stones[i - 2]);
        }
        dp[i] = min(fs, ss);
    }
    cout << dp[n - 1] << endl;
}