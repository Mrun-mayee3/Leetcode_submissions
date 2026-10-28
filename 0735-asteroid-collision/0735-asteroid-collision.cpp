class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> belt;

        for(int i = 0; i < asteroids.size(); i++){
            if(asteroids[i] > 0) belt.push_back(asteroids[i]);

            else{
                // if asteroids[i] is negative. i.e current is negative
                while(!belt.empty() && belt.back() > 0 && belt.back() < abs(asteroids[i])){
                    belt.pop_back();
                }

                if(!belt.empty() && belt.back() == abs(asteroids[i]))
                    belt.pop_back();
                else if (belt.empty() || belt.back() < 0)
                    belt.push_back(asteroids[i]);
            }
        }
        return belt;
    }
};