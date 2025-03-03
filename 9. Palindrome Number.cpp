/**Given an integer x, return true if x is a palindrome, and false otherwise.**/

 class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long int res=0;
        while(n!=0){
            int rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
        if(res==x){
            return true;
        }
        else{
            return false;
        }
    }
};
