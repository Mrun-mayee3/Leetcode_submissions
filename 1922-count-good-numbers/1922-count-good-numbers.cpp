class Solution {
public:
    const int M = 1e9+7;
    int countGoodNumbers(long long n) {
        // 5 possibilities for even 
        // 4 for prime
        return power(5, (n+1)/2) * power(4, n/2) % M;

    }
    long long power(long long a, long long b){
        if(b == 0){
            return 1;
        }

        long long half = power(a, b/2);
        long long res = (half * half) % M;
        // for odd numbers
        if(b % 2 == 1){
            res = (res * a) % M;
        }
        return res;
    }
}; 