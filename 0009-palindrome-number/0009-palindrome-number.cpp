class Solution {
public:
    bool isPalindrome(int x) {


        if(x<0) return false;

        int num = abs(x);
        int reversed_num = 0;

        while(num!=0)
        {
            int a = num%10;
            if(reversed_num > INT_MAX/10 || (reversed_num == INT_MAX/10 &&        a > INT_MAX % 10)) return false;
            if(reversed_num < INT_MIN/10 || (reversed_num == INT_MIN/10 &&        a < INT_MIN % 10)) return false;
            
            reversed_num = reversed_num*10 + a;
            num/=10;
            

        }    

        if(x==reversed_num) return true;

        return false;

        
    }
};