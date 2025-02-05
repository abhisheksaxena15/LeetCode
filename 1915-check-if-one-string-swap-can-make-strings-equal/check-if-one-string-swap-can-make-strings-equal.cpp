class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        if(s1 == s2) return true;

        unordered_map<char , int> map1 , map2;

        for(char c : s1){
            map1[c]++;
        }

        for( char c: s2){
            map2[c]++;
        }

        if ( map1 != map2 ) return false;
        vector<int> answer;

        for ( int i = 0; i < s1.size() ;i++){
            if(s1[i] != s2[i]){
                answer.push_back(i);
            }
        }

        if( answer.size() == 2){
            int x = answer[0] , y = answer[1];
            swap(s2[x] , s2[y]);

            return s1 == s2;
        }
        return false;
    }
};