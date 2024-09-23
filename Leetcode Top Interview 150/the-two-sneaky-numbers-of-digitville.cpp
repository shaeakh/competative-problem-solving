#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>m;
        vector<int>v;
        int cnt = 0;
        int s = nums.size();
        for(int i=0;i<s;i++){
            m[nums[i]]++;
            if(m[nums[i]]>1){
                cnt++;
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};

int main()
{
    
    
}
/* problem link: */