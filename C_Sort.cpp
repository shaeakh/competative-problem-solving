#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

vector<array<int, 26>> compute_prefix_sum(const string &s)
{
    int n = s.length();
    vector<array<int, 26>> prefix(n + 1, array<int, 26>{0});

    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i];
        prefix[i + 1][s[i] - 'a']++;
        printf("prefix[i] = %d , prefix[i + 1] = %d , s[i] = %c, s[i] - 'a' = %d , prefix[i + 1][s[i] - 'a'] = %d , \n", prefix[i], prefix[i + 1]);
    }
    cout<<endl;
    return prefix;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        vector<array<int, 26>> pre_a = compute_prefix_sum(a);
        vector<array<int, 26>> pre_b = compute_prefix_sum(b);

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            --l; // Convert to zero-based index

            array<int, 26> count_a = pre_a[r];
            array<int, 26> count_b = pre_b[r];

            for (int i = 0; i < 26; ++i)
            {
                count_a[i] -= pre_a[l][i];
                count_b[i] -= pre_b[l][i];
            }

            int operations = 0;
            for (int i = 0; i < 26; ++i)
            {
                if (count_a[i] < count_b[i])
                {
                    operations += count_b[i] - count_a[i];
                }
            }

            // cout << operations << "\n";
        }
    }

    return 0;
}
