// class Solution {
// public:
//     int integerBreak(int n) {
//         if (n == 2) return 1;
//         if (n == 3) return 2;

        
//         int quotient = n / 3;
//         int remainder = n % 3;

//         if(remainder == 0) return pow(3 , quotient);
//         if(remainder == 1) return pow(3 , quotient - 1) * 4;
//         else{
//             return pow(3 , quotient) * 2;
//         }

//     }
// };

class Solution {
public:
    int integerBreak(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;

        int result = 1;
        while(n > 4){
            result = result * 3;
            n = n - 3;
        }
        return result = result * n;

    }
};