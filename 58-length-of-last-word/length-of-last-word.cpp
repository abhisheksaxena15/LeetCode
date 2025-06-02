class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> result;
        string x = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(!x.empty()){
                    result.push(x);
                    x ="";
                }
            }
            else{
                x = x + s[i];
            }
            
        }

        if(!x.empty()){
            result.push(x);
        }
        return result.empty() ? 0 : result.top().size();
    }
};