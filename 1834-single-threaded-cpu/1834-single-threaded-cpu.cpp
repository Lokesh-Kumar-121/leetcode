class Solution {
public:
    // struct cmp
    // {
    // static bool my_cmp(vector<int>&a,vector<int>&b)
    // {
    //     return(a[0] < b[0]);
    // }
    // };
    
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int>res;
        for(int i=0;i<tasks.size();i++)
        {
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        // for(int i=0;i<tasks.size();i++)
        // {
        //     cout<<"["<<tasks[i][0]<<","<<tasks[i][1]<<","<<tasks[i][2]<<"]"<<",";
        // }
        // cout<<endl;
        priority_queue<vector<int>,vector<vector<int>>,greater<>> pq;
        
        int time=tasks[0][0];
        int i=0;
        
        while(i < tasks.size())
        {
            int flag=0;
            while(i < tasks.size() && tasks[i][0] <= time)
            {
                swap(tasks[i][0],tasks[i][1]);
                swap(tasks[i][1],tasks[i][2]);
                pq.push(tasks[i]);
                i++;
                
                
            }
            if(!pq.empty()){
            vector<int>temp=pq.top();
            pq.pop();
            time+=temp[0];
            res.push_back(temp[1]);
            flag=1;
            }
            if(flag==0)
                time=tasks[i][0];
            
            
        }
        
        while(!pq.empty())
        {
            vector<int>temp=pq.top();
            pq.pop();
            res.push_back(temp[1]);
        }
        
        return res;
    }
};