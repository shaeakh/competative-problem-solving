#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int n = nums.size();
        int temp = nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]!=temp){
                temp = nums[i];
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    
}
/* problem link: */