class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int max=0;
        while(i<j){
            int width=j-i;
            int heights=min(height[i],height[j]);
            int area=heights*width;
            if(area>max){
                max=area;
            }
            if(height[i]<height[j]){
                i++;
            }
            else if(height[i]>height[j])j--;
            else{
                i++;
                j--;
            }
        }
        return max;
    }
};