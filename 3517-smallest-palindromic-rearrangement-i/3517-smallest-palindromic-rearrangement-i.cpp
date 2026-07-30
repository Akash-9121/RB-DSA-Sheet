class Solution {
public:
    string smallestPalindrome(string s) {
        vector <int> freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i] - 'a']++;
        }
        int i=0;
        int j=s.size()-1;
        string ans(s.size(),' ');
        for(int k=0;k<26;k++){
            while(freq[k]>=2){
                ans[i]=char('a'+ k);
                ans[j]=char('a'+k);
                i++;
                j--;
                freq[k]-=2;
            }
            if(freq[k]==1){
                ans[s.size()/2]=char('a'+ k);
            }

        }
       return ans;
    }
};