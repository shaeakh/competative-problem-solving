#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> d;
        vector<int> result;
        for (int index = 0; index < nums.size(); ++index)
        {
            if (d.find(target - nums[index]) != d.end())
            {
                
                result.push_back(d[target - nums[index]]);
                result.push_back(index);
                break;
            }
            d[nums[index]] = index;
        }
        return result;
    }
};

void solve()
{
    int target = 9;
    vector<int> n;
    n.push_back(2);
    n.push_back(7);
    n.push_back(11);
    n.push_back(15);
    Solution s;
    vector<int> v = s.twoSum(n, 9);
    cout << v[0] << " " << v[1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
}
/* problem link: https://leetcode.com/problems/two-sum/description/?envType=study-plan-v2&envId=top-interview-150 */