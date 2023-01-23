class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
//         int judge=trust[0][1];
//         for(int i=0;i<trust.size();i++)
//         {
//             if(trust[i][1] != judge || trust[i][0] == judge)
//                 return -1;
                
//         }
        
//         return judge;
        
        if(trust.size()==0 && n==1)
            return 1;
        if(trust.size()==0)
            return -1;
        
        int mx=INT_MIN;
        for(int i=0;i<trust.size();i++)
        {
            mx=max(mx,trust[i][0]);
            mx=max(mx,trust[i][1]);
        }
        
        vector<vector<int>>mat(mx+1,vector<int>(mx+1,0));
        for(int i=0;i<trust.size();i++)
        {
            int row=trust[i][0];
            int col=trust[i][1];
            mat[row][col]=1;
        }
        
        int judge=-1;
        for(int i=1;i<mat.size();i++)
        {
            int flag=0;
            for(int j=1;j<mat[i].size();j++)
            {
                if(mat[i][j] == 1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                judge=i;
                break;
            }
        }
        if(judge==-1)
            return judge;
        
        //cout<<judge<<endl;
        
        int i=1,j=judge;
        while(i<=mx)
        {
            if(i==judge){
                i++;
                continue;
            }
            if(mat[i][j] == 0)
                return -1;
            i++;
        }
        
        return judge;
    }
};