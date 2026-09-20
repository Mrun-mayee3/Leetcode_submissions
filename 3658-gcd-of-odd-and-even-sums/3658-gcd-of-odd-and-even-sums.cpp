class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = 0;
        int sumOdd = 0;

        sumEven = n * (n + 1);
        sumOdd = n * n;

        //for (int i = 1; i<= n; i++){
        //    sumEven += 2 * i;      
        //    sumOdd += 2 * i -1;
        //}
        
        //while(sumOdd != 0){
        //    int temp = sumOdd;
        //    sumOdd = sumEven % sumOdd;
        //    sumEven = temp;
        //}
        //return sumEven;


        //gcd using recursion 
        
        return gcd(sumEven, sumOdd);
    }

    int gcd(int sumEven,int sumOdd){
        if(sumOdd == 0)
            return sumEven;
        
        return gcd(sumOdd, sumEven % sumOdd);
    }
};