class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int max =-1;
        for(char c : num){
            int digit = c - '0';
            if(digit % 2 == 1 && digit > max ){
                max = digit;

            }
        }if (max != -1){
            ans = to_string(max);
        }
        return ans;
        
        
    }
};