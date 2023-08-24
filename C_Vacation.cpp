#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> happiness(N, vector<int>(3));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> happiness[i][j];
        }
    }

    vector<vector<int>> dp(N, vector<int>(3));

    for (int i = 0; i < 3; ++i) {
        dp[0][i] = happiness[0][i];
    }

    for (int i = 1; i < N; ++i) {
        //cout<<dp[i][0]<<" -> ";
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + happiness[i][0];
        //cout<<dp[i][0]<<endl;

        //cout<<dp[i][1]<<" -> ";
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + happiness[i][1];
        //cout<<dp[i][1]<<endl;

        //cout<<dp[i][2]<<" -> ";
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + happiness[i][2];
        //cout<<dp[i][2]<<endl;
    }

    int maxHappiness = max({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]});
    cout << maxHappiness << endl;

    return 0;
}

/* problem link: https://atcoder.jp/contests/dp/tasks/dp_c */