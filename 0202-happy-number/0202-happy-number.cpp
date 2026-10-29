class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        
        int i = 1;
        while(15 >= i){
            i++;
            int sum = 0;
            while(n > 0){
                int digit = n % 10;
                sum += digit * digit;
                n = n/10;
            }
            if(sum == 1) return true;
            else n = sum;
        }
        return false;
    }
};