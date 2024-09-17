#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        int k = 0;

        for(int i=0;i<n;i++){
            if(m[nums[i]]<=1){
                m[nums[i]]++;
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