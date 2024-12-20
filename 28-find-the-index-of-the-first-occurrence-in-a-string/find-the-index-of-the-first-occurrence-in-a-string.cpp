class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
         if (needle.length() > haystack.length()) {
            return -1;
        }
        
        for(int  i=0 ; i < haystack.length() - needle.length() + 1; i++){
            if(needle[0] == haystack[i] && haystack.substr(i, needle.length()) == needle ){
                return i;
            }
        }
        return -1;
        
    }
};
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int haystackL=haystack.length(),needleL=needle.length();
//         for(int i=0;i<haystackL-needleL+1;i++)
//         {
//             if(needle[0]==haystack[i] && needle==haystack.substr(i,needleL))
// 				return i;
//         }
//         return -1;
//     }
// };
