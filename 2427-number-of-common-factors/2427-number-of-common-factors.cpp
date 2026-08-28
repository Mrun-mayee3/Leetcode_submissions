class Solution {
public:
    int commonFactors(int a, int b) {
        int total_num = 0;
        vector<int> v;
        
        int small = min(a, b);
        int large = max(a, b);
        
        //for (int i = 1; i <= small/i; i++){
        //    if(small % i == 0){
        //        v.push_back(i);  
        //        
        //        if(i != small / i) 
        //            v.push_back(small / i);
        //    } 
        //}
        //for(int num : v){
        //    if(large % num == 0) total_num++;
        //}
        //return total_num;

        for(int i = 1; i <= small; i++){
            if(small % i == 0 && large % i == 0)
                total_num++;
        }
        return total_num;
    }
};