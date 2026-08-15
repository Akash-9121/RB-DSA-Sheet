class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> arr;
        int i=0;
        int j=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]<nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }
            else{
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            arr.push_back(nums2[j]);
            j++;
        }
        int low=0;
        int high=arr.size()-1;
        if(arr.size()%2==0){
            int mid1=low+(high-low)/2;
            int mid2=mid1+1;
            double ans=(arr[mid1]+arr[mid2])/2.0;
            return ans;
        }
        else{
            int mid=low+(high-low)/2;
            return arr[mid];
        }
    }
    
};