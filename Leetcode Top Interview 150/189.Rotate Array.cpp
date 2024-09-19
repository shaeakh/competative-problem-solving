#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    //k = 3
    k %= nums.size();
    // k = 1
    reverse(nums, 0, nums.size() - 1);
    // 7 6 5 4 3 2 1
    reverse(nums, 0, k - 1);
    
    reverse(nums, k, nums.size() - 1);
  }

 private:
  void reverse(vector<int>& nums, int l, int r) {
    while (l < r)
      swap(nums[l++], nums[r--]);
  }
};

int main()
{

}
/* problem link: */