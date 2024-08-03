class Solution {
public:
    bool canJump(vector<int>& nums) {
       int targetindex = nums.size()-1;
       for( int i = nums.size() - 2 ; i >= 0; i--){
        if(targetindex <= i + nums[i]){
            targetindex = i ;
        }
       } 
       return targetindex ==0;
    }
};