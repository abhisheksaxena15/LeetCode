class Solution {
public:

    bool vowel (char ch){
        char c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        while ( i < j ){
            if( !vowel(s[i])){
                i++;
            }
            else if ( !vowel(s[j])){
                j--;
            }
            else{
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                i++;
                j--;
            }
        }
        return s;
    }
};