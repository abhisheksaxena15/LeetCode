class Solution {
public:
    bool isPerfectSquare(int num) {
        
        for(long long i = 0 ; i * i <= num; i++){
            if(i*i == num){
                return true;
            }
        }
        return false;
    }
};











/*class Solution {
public:
    bool isPerfectSquare(int num) {
        long long start = 1, end = num;

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            long long square = mid * mid;

            if (square == num)
                return true;
            else if (square < num)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }
};
 Step-by-Step Binary Search Algorithm
Initialize two pointers:
start = 1, end = num

While start <= end:

Calculate mid = start + (end - start) / 2

Calculate square = mid * mid

If square == num → it's a perfect square → return true

If square < num → move to the right half (start = mid + 1)

If square > num → move to the left half (end = mid - 1)

If loop ends and we never find a mid * mid == num, return false.

✅ Example Walkthrough
Input: num = 16

start = 1, end = 16

mid = (1 + 16) / 2 = 8
→ 8 * 8 = 64 → too big → move left

end = 7

mid = (1 + 7) / 2 = 4
→ 4 * 4 = 16 → match found → return true

Input: num = 14

start = 1, end = 14

mid = 7 → 7*7 = 49 → too big → end = 6

mid = 3 → 3*3 = 9 → too small → start = 4

mid = 5 → 5*5 = 25 → too big → end = 4

mid = 4 → 4*4 = 16 → too big → end = 3

start > end → return false */