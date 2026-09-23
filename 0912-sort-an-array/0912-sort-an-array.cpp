class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        merge_sort(nums, 0, n - 1);
        return nums;
    }

    void merge_sort(vector<int>& nums, int start, int end) {
        if(start >= end)
            return;

        int mid = start + (end - start) / 2;

        merge_sort(nums, start, mid);
        merge_sort(nums, mid + 1, end);

        merge(nums, start, mid, end);
    }

    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp;

        int l = start;
        int r = mid + 1;

        while(l <= mid && r <= end) {
            if(nums[l] <= nums[r]) {
                temp.push_back(nums[l]);
                l++;
            }
            else {
                temp.push_back(nums[r]);
                r++;
            }
        }

        while(l <= mid) {
            temp.push_back(nums[l]);
            l++;
        }

        while(r <= end) {
            temp.push_back(nums[r]);
            r++;
        }

        for(int i = 0; i < temp.size(); i++) {
            nums[start + i] = temp[i];
        }
    }
};