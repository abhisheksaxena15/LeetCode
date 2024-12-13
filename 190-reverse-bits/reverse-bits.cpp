class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result = 0;
        for(int  i = 0; i < 32 ; i++){
            int x = n & 1;
            result = (result << 1) | x;
            n = n>>1;
        }
        return result;
    }
};