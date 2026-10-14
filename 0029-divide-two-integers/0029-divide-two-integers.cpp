class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = true;
        if(dividend < 0 && divisor > 0) sign = false;
        if(dividend >= 0 && divisor < 0) sign = false;


        long long a = abs((long long) dividend) , b = abs((long long)divisor);
        long long ans =0;
        while(a >= b){
            int cnt = 0;

            while(a >= (b << (cnt+1))){
                cnt++;
            }
            ans += (1LL << cnt);
            a = a - (b  << cnt);
        }

        if(ans > (1LL << 31) && sign)
            return INT_MAX;

        if(ans >= (1LL << 31) && sign == false)
            return INT_MIN;

        return sign ? (int)ans : (int)(-ans);
    }
};