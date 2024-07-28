class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left =0 ;
        int right = 0;
        int maxSum =0;
        for( int i =0 ; i < k ;i++)
        left += cardPoints[i];
        maxSum = left;

        for(int leftindex = k-1 , rightindex =n-1 ;leftindex >= 0 ; leftindex -- , rightindex --){
            left -= cardPoints[leftindex];
            right += cardPoints[rightindex];
            maxSum = max(maxSum , left + right);
        }
        return maxSum;

    }
};