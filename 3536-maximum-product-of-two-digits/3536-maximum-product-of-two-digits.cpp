class Solution {
public:
    int maxProduct(int n) {
        string str = to_string(n);
        int largest=INT_MIN,secondlargest=INT_MIN;
        for(int i=0;i<str.size();i++){
            int digit = str[i] - '0';
            if(digit > largest){
                secondlargest=largest;
                largest=digit;
            }
            else if(digit > secondlargest){
                secondlargest=digit;
            }
        }
        return largest * secondlargest;
    }
};