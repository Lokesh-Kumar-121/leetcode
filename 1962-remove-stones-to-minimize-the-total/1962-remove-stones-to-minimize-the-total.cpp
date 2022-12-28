class Solution {
public:
    int minStoneSum(vector<int>& arr, int k) {
        
        priority_queue <int> pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push(arr[i]);
        }
        
        for(int i=0;i<k;i++)
        {
            int ele=pq.top();
            if(ele == 1)
                break;
            pq.pop();
            ele=ceil(ele/2.0);
            pq.push(ele);
        }
        
        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
        //return accumulate(pq.begin(),pq.end(),0ll);
    }
};