class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for(int i=0;i<nums.size();i++){
            if(isprime(i)){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        long long sumA=0;
        long long sumB=0;
        for(int i=0;i<a.size();i++){
            sumA=sumA+a[i];
        }
        for(int i=0;i<b.size();i++){
            sumB=sumB+b[i];
        }
        long long ans=abs(sumA-sumB);
        return ans;
    }
};