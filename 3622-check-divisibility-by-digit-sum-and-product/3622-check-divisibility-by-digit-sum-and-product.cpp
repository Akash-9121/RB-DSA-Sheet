class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int product(int n){
        int prod=1;
        while(n>0){
            int digit=n%10;
            prod=prod*digit;
            n/=10;
        }
        return prod;
    }
    bool checkDivisibility(int n) {
        int Digitsum = sum(n);
        int Digitprod = product(n);
        int ans=Digitsum+Digitprod;
        if(n%ans==0){
            return true;
        }
        else{
            return false;
        }
    }
};