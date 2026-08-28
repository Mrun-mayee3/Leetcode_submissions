class Solution {
public:
    bool isPerfectSquare(int num) {
        int count = 0;
        for(long long i = 1; i*i <= num; i++){
            if(num % i == 0){
                count++;
                if(i != num / i){
                    count++;
                }
            }
        }
        if(count % 2 != 0){
            return true;
        }
        else{
            return false;
        }
    }
};