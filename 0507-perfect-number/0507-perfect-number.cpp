class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i <= num/i; i++){
            if(num % i == 0){
                sum += i;

                if(i != num/i){
                    sum += num / i;
                }
            }
        }
        int a = sum - num;
        if(a == num){
            return true;
        }
        else{
            return false;
        }
    }
};