class Solution {
public:
    int singleNumber(vector<int>& nums) {
        auto Xor = 0;
        for(int x : nums){
            Xor = Xor ^ x;
        }
        return Xor;
    }
};