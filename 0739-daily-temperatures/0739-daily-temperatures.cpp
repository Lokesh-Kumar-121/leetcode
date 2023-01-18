class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
//         int count;
//         int n=t.size();
//         stack<int>st;
//         for(int i=n-1;i>=0;i--)
//         {
//             vector<int>arr;
//             count=1;
//             if(st.empty())
//             {
//                 st.push(t[i]);
//                 t[i]=0;   
//             }
//             else
//             {
//                 while(!st.empty() && st.top() <= t[i])
//                 {
//                     int temp=st.top();
//                     arr.push_back(temp);
//                     st.pop();
//                     count++;
                    
//                 }
//                 if(st.empty())
//                 {
//                     st.push(t[i]);
//                     t[i]=0;
//                 }
//                 else
//                 {
//                     st.push(t[i]);
//                     t[i]=count;
//                     for(int i=arr.size()-1;i>=0;i--)
//                     {
//                         st.push(arr[i]);
//                     }
                    
//                 }
                   
//             }
//              arr.clear();
//         }
//         return t;
        vector<int>res(t.size());
        stack<int>st;
        for(int i=0;i<t.size();i++)
        {
            if(st.empty() || t[i] <= t[st.top()])
            {
                st.push(i);
            }
            // else if(!st.empty() && arr[i] > arr[st.top()])
            // {
                while(!st.empty() && t[i] > t[st.top()])
                {
                    int temp=st.top();
                    res[temp]=i-temp;
                    st.pop();
                }
            
            st.push(i);
                    
            // }
        }
        return res;
    }
};

//73 