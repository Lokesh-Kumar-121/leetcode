class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& nums) {
        
        if(nums.size() <= 2)
            return true;
        
        //int slope;
        //int cmp=(nums[1][1]-nums[0][1]) / (nums[1][0]-nums[0][0]);
        int y2=nums[1][1];
        int x2=nums[1][0];
        int y1=nums[0][1];
        int x1=nums[0][0];
        for(int i=2;i<nums.size();i++)
        {
            int y3= nums[i][1];
            int x3= nums[i][0];
            //slope=y/x;
            if(((y2-y1)*(x3-x2)) != ((y3-y2)*(x2-x1)))
                return false;
            //cout<<slope<<endl;
        }
        
        return true;
    }
};