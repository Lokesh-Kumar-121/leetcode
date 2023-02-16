class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
//         vector<int>pre(n),suf(n);
//         pre[0] = height[0];
//         suf[n-1] = height[n-1];
        
//         for(int i=1;i<n;i++)
//         {
//             pre[i] = max(pre[i-1],height[i]);
//         }
        
//         for(int i=n-2;i>=0;i--)
//         {
//             suf[i] = max(suf[i+1],height[i]);
//         }
        
        int ans=INT_MIN;
        
        int i=0,j=n-1;
        while(i<j)
        {
            int area=min(height[i],height[j]) * (j-i);
            ans=max(ans,area);
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return ans;
    }
};