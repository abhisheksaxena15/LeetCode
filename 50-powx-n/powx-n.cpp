class Solution {
public:
    double myPow(double x, int n) {
        long long binary_form = n;
        if (n < 0) {
            x = 1/x;
            binary_form = -binary_form;
        }
        double ans = 1;
        while(binary_form > 0){
            if( binary_form % 2 == 1){
                ans = ans * x;
            }
            x = x * x;
            binary_form = binary_form / 2;
        }
        return ans;
    }
};