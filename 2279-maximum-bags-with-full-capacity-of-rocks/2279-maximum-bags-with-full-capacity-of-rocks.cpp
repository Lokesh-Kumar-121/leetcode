class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        for(int i=0;i<rocks.size();i++)
        {
            capacity[i]=capacity[i]-rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        // for(auto x:capacity)
        //     cout<<x<<" ";
        // cout<<endl;
        int count=0;
        for(int i=0;i<rocks.size();i++)
        {
            if(additionalRocks == 0)
                break;
            if(capacity[i] == 0){
                count++;
                continue;
            }
            // while(capacity[i] != 0 && additionalRocks > 0)
            // {
            //     capacity[i]--;
            //     additionalRocks--;
            // }
            if(additionalRocks >= capacity[i])
            {
                additionalRocks-=capacity[i];
                capacity[i]=0;
            }
            if(capacity[i] == 0)
                count++;
            if(additionalRocks == 0)
                break;
        }
        return count;
        
    }
};