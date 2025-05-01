class Solution {
public:
    int addDigits(int num) {
        if ( num < 10) return num;
        int remainder = 0;
        while ( num > 0){
            int digit = num % 10;
            remainder = remainder + digit;
            num = num/10;
        }
        
        return addDigits(remainder);
    }
};