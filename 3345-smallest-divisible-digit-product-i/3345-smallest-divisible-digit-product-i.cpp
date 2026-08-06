class Solution {
public:
    int product(int n){
        int digit=n;
        int product=1;
        while(n>0){
        digit=n%10;
        product=product*digit;
        n=n/10;
      }
      return product;
    }
    int smallestNumber(int n, int t) {
      int j=n;
        while(true){
          int ans=product(j);
          if(ans %t == 0){
            return j;
          }
          else{
            j++;
          }
        }
    }
};