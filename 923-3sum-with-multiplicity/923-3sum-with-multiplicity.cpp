class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int mod=1e9+7;
        vector<long>v(101,0);
        for(auto &x:arr){
            v[x]++;
        }
        long ans=0;
        for(int i=0;i<=100;i++){
            for(int j=i;j<=100;j++){
                int element=target-i-j;
                if(element>=0 && element<=100 && v[element]>0){
                    //three cases are possible 
                    //1:when all are same
                    if(i==j && i==element){
                        ans+=(v[i]*(v[i]-1)*(v[i]-2))/6;
                    }
                     else if(i==j && i!=element){
                         ans+=((v[i]*(v[i]-1))/2)*v[element];
                     }                                                                                           else if(i<j && j<element){
                         ans+=(v[i]*v[j]*v[element]);
                     }
                }
            }
        }
        ans=ans%mod;
        return ans;
    }
};