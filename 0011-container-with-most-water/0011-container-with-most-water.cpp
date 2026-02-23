class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxArea=0;

        while(l<r){
            int width = r-l;
            int hight = min(height[l],height[r]);
            maxArea = max(maxArea,width*hight);

            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
    }
};