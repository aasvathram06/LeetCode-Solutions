class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
       int temp =x;
       long long out=0;
       while (temp!=0){
          out = out * 10 + temp % 10;
          temp/=10;
       }

       return out == x;
    }
};