class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open, star;
        int len = s.size();

        for (int i = 0; i < len; i++) {
            if (s[i] == '(') {
                open.push(i);  // Push index of '('
            } else if (s[i] == '*') {
                star.push(i);  // Push index of '*'
            } else {  // s[i] == ')'
                if (!open.empty()) {
                    open.pop();
                } else if (!star.empty()) {
                    star.pop();
                } else {
                    return false;
                }
            }
        }

        // Now match leftover '(' with '*' (acting as ')')
        while (!open.empty() && !star.empty()) {
            if (open.top() < star.top()) {
                open.pop();
                star.pop();
            } else {
                // Invalid if '(' appears after '*'
                return false;
            }
        }

        // If any '(' still unmatched
        return open.empty();
    }
};


// class Solution {
// public:
//     bool checkValidString(string s) {
        
//         stack<int> open , star;
//         int len = s.size();

//         for ( int i =0; s[i] != '\0'; i++){
//             if(s[i] == '('){
//                 open.push(i);
//             }
//             else if(s[i] == '*'){
//                 star.push(i);
//             }
//             else {
//                 if( !open.empty() ){
//                     open.pop();
//                 }
//                 else if(!star.empty()){
//                     star.pop();
//                 }
//                 else {
//                     return false;
//                 }
//             }
//         }
//         while ( !open.empty() ){

//             if( star.empty()){
//                 return false;
//             }
//             else if (star.top() < open.top()){
//                 open.pop();
//                 star.pop();
//             }
//             else {
//                 return false;
//             }
//         }
//         return true;
//     }
// };