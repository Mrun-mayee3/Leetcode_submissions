class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = n - 1;

        k = k % n;

        int s = n - k; // s is the low of second array 
        int r = s - 1; // r is the high of first array
        
        while(i < r){
            swap(nums[i], nums[r]);
            i++;
            r--;
        }
        while(s < j){
            swap(nums[s], nums[j]);
            s++;
            j--;
        }

        int m = 0, p = n-1;
        while(m < p){
            int temp = nums[m];
            nums[m] = nums[p];
            nums[p] = temp;
            m++;
            p--;
        }
    }
};