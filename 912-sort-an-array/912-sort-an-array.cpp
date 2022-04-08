class Solution {
public:
    void merge(vector<int>&arr,int l,int mid,int r){ 
       int m=mid-l+1;
        int n=r-mid;
        int left[m];
        int right[n];

        for(int i=0;i<m;i++){
            left[i]=arr[l+i];
        }
        
        for(int i=0;i<n;i++){
            right[i]=arr[mid+1+i];
        }
        int i=0;
        int j=0;
        int k=l;
        while(i<m && j<n){
            if(left[i] <= right[j]){
                arr[k]=left[i];
                i++;
            }
            else{
                arr[k]=right[j];
                j++;
            }
            k++;
        }
         while (i < m) {
            arr[k] = left[i];
            i++;
            k++;
        }
 
  
            while (j < n) {
                arr[k] = right[j];
                j++;
                k++;
            }
    }
    
    // void mergesort(vector<int>& arr,int i,int j){
    //     int n=arr.size();
    //     while (i<j){
    //     int mid=i+(j-i)/2;
    //     mergesort(arr,i,j);
    //     mergesort(arr,mid+1,j);
    //     merge(arr,i,mid,j);
    //     }
    // }
    void mergeSort(vector<int>&arr,int l,int r){
        if(l<r){
            int mid = l + (r-l) / 2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
      mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
/* int m=mid-l+1;
        int i=0;
        int j=0;
        int k=l;
*/