class Solution {
public:
    bool isPerfectSquare(int num) {
        int count = 0;
        for(int i = 1; i <= num / i; i++){
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