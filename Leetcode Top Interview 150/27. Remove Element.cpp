/*bismillahir~rahmanir~rahim*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int j = n-1;
        int k = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
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