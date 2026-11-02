class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum , rsum = 0;
        int n = cardPoints.size();

        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        int maxi = lsum;
        int r = n-1;
        for(int l = k-1; l >= 0; l--){
            lsum = lsum - cardPoints[l];
            rsum = rsum + cardPoints[r];
            maxi = max(maxi, lsum + rsum);
            r--;
        }
        return maxi;
    }
};