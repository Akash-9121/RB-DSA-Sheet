class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n = height.size();
        int j = n-1;
        int ans = 0;
        while(i<j){
            int w = j-i;
            int h = min(height[i],height[j]);
            int a = w*h;
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            ans = max(ans,a);
        }
        return ans;
    }
};