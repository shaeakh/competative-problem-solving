#include <bits/stdc++.h>
using namespace std;

inline void flushOut() {
    cout << '\n';
    cout.flush();
}

long long query(int start, const vector<int>& nodes) {
    cout << "? " << start << " " << nodes.size() << " ";
    for (int u : nodes) cout << u << " ";
    flushOut();

    long long res;
    if (!(cin >> res)) exit(0);
    if (res == -1) exit(0);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nodes(n);
        iota(nodes.begin(), nodes.end(), 1);

        vector<int> dist(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            dist[i] = (int)query(i, nodes);
        }

        int start = max_element(dist.begin() + 1, dist.end()) - dist.begin();
        int maxLen = dist[start];

        vector<vector<int>> bucket(maxLen + 1);
        for (int i = 1; i <= n; i++) {
            if (dist[i] > 0 && dist[i] <= maxLen) {
                bucket[dist[i]].push_back(i);
            }
        }

        vector<int> answer;
        vector<char> visited(n + 1, 0);

        answer.push_back(start);
        visited[start] = 1;

        int current = start;
        for (int need = maxLen - 1; need >= 1; need--) {
            int nxt = -1;
            for (int v : bucket[need]) {
                if (visited[v]) continue;
                vector<int> S = {current, v};
                if (query(current, S) == 2) {
                    nxt = v;
                    break;
                }
            }

            if (nxt == -1) {
                cout << "! 1 " << start << " ";
                flushOut();
                goto next_case;
            }

            answer.push_back(nxt);
            visited[nxt] = 1;
            current = nxt;
        }

        cout << "! " << answer.size() << " ";
        for (int v : answer) cout << v << " ";
        flushOut();

        next_case:;
    }
    return 0;
}
