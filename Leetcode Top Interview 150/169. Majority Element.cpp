#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>m;
        int mf = 0, me = -INT_MAX;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>mf){
                mf = m[nums[i]];
                me = nums[i];
            }
        }
        return me;
    }
};

int main()
{
    
}
/* problem link: */