class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        
        vector<pair<int,int>>arr;
        for(int i=0;i<p.size();i++)
        {
            arr.push_back({c[i],p[i]});
        }
        
        sort(arr.begin(),arr.end());
        
        // for(auto x:arr)
        //     cout<<x.first<<"-"<<x.second<<endl;
        
        priority_queue<int>q;
        
        int ind=0;
        for(int i=0;i<k;i++)
        {
            while(ind<arr.size() && arr[ind].first <= w)
            {
                q.push(arr[ind].second);
                ind++;
            }
            
            if(!q.empty())
            {
                int x=q.top();
                q.pop();
                w+=x;
            }
        }
        
        return w;
    }
};


// 4 2 3 2
// 0 2 3 2
    
//     w=0 k=2/k=3
//         7   
