class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int count=0;
        int n=strs[0].length();
        while(n--)
        {
            for(int i=1;i<strs.size();i++)
            {
                if(strs[i][n] < strs[i-1][n])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
        
    }
};

