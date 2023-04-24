class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);           
        }
        
        while(pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            
            if(x != y)
            {
                y = y-x;
                pq.push(y);

            }
        }
        
        if(pq.size())
            return pq.top();
        
        return 0;
    }
};