class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int>arr;
        sort(potions.begin(),potions.end());
        
        for(int k=0;k<spells.size();k++)
        {
            int i=0,j=potions.size()-1;
            int mid;
            int flag=0;
            while(i<=j)
            {
                mid = i+(j-i)/2;
                
                if(potions[mid]*1ll*spells[k] < success)
                    i=mid+1;
                else
                {
                    if(mid == 0 || potions[mid-1]*1ll*spells[k] < success)
                    {
                        arr.push_back(potions.size() - mid);
                        flag=1;
                        break;
                    }
                    else
                        j=mid-1;
                }
                
            }
            
            if(flag==0)
                arr.push_back(0);
        }
        
        return arr;
    }
};