class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i = 1;
        istringstream iss(sentence);
        string words;
        
        while( iss >> words){
            if(words.find(searchWord) == 0){
                return i;
            }
            i++;
        }
        return -1;
    }
};