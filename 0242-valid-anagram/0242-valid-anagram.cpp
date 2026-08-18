class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq [256]={0};
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            freq [s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            freq [t[i]]--;
        }
        for(int i=0;i<t.size();i++){
            if(freq[t[i]]!=0){
                return false;
            }
        }
        return true;
    }
};