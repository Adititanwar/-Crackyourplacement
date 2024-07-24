class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes =0;
        int ones =0;
        int n = nums.size();
        for( int num :nums){
            if (num ==0 )zeroes ++;
           else if(num == 1)ones++;

        }
        for( int i =0; i < zeroes ; ++i){
            nums[i]= 0;

        }
        for( int i = zeroes ; i < zeroes + ones ;++i){
            nums[i]=1;
        }
        for(int i =zeroes + ones ; i < n ; ++i){
            nums[i]=2;        }
    }

};