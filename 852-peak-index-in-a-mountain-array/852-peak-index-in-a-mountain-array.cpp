class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index=-1;
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]>arr[mid+1]&& arr[mid]>arr[mid-1]){
                index=mid;
                break;
            }
            else if(arr[mid]<arr[mid+1]){
                start=mid;
            }
            else{
                end=mid;
            }
        }
        return index;
    }
};