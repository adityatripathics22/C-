class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0) return false;
        while (n%3 == 0 ){
            n = n/3;
        }return (n ==1);
    }
};


//return(n > 0 && 1162261467 % n == 0 ); // 1162261467 is the largest power of 3 that fits in an int