class Solution {
public:
    int countVowelSubstrings(string word) {
        // keeping a map to store only vowels in it 

        int count = 0;

        for(int i = 0; i< word.length(); i++){
            unordered_map<char, int> mp(5);
            
            for(int j = i; j < word.length(); j++){
                if(!checkVowel(word[j])){
                    break;
                }
                // if its vowel then add in map
                mp[word[j]]++;

                if(mp.size() == 5){
                    count++;
                }
            }
        }
        return count;
    }

    // function to check vowels
    bool checkVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
};