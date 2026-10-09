class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;

        //xor lelenge and num of set bits cnt kerenge
        int xored = start ^ goal;

        while(xored > 1){
            xored = xored & (xored - 1);
            cnt += 1;
        }
        if(xored == 1) cnt += 1;
        return cnt;
    }
};