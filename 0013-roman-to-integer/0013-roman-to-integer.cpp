class Solution {
public:
    int getValue(char ch){
        if(ch == 'I') return 1;
        else if(ch == 'V') return 5;
        else if(ch == 'X') return 10;
        else if(ch == 'L') return 50;
        else if(ch == 'C') return 100;
        else if(ch == 'D') return 500;
        else if(ch == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
           int ans=0;
           for(int i=0;i<s.size();i++){
                int current=getValue(s[i]);
                if(i+1 < s.size()){
                    int next = getValue(s[i+1]);
                    if(current < next){
                        ans=ans-current;
                    }
                    else{
                        ans=ans+current;
                    }
                }
                else{
                    ans=ans+current;
                }
           }
           return ans;
    }       
};