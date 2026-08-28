class Solution {
public:
    int commonFactors(int a, int b) {
        int total_num = 0;

        int small = min(a, b);
        int large = max(a, b);
        for(int i = 1; i <= small; i++){
            if(small % i == 0 && large % i == 0)
                total_num++;
        }
        return total_num;
    }
};